#include<iostream>
using namespace std;


void printboard(int arr[][20],int n){
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}

bool CanPlaceQueen(int arr[][20],int n, int ro, int col){
    //check rows above row ro for column col
    for (int i=ro-1; i>=0 ; i--){
        if (arr[i][col]==1){
            return false;
        }
    }
    // check left diagonal all the way to row 0
    int i=ro; 
    int j=col;
    while (i>=0 and j>=0)
    {
        i--;
        j--;
        if (arr[i][j]==1){
            return false;
        }
    }
    // check right diagonal all the way to row 0
    i=ro; 
    j=col;
    while (i>=0 and j<n)
    {
        i--;
        j++;
        if (arr[i][j]==1){
            return false;
        }
    }
return true; 
}


bool solveNQueen(int arr[][20], int  n , int i)

{
    // base case
    if (i==n){
        printboard(arr,n);
    }
    // recursion
    // try to place a queen on the row i by trying all columns j 
    for (int j=0;j<n;j++)
    {   
        if (CanPlaceQueen(arr,n, i, j ))
        {
            arr[i][j]=1 ; 
            bool success =solveNQueen(arr, n, i+1);
            if (success==true){
                return true;
            }
            //backtrack
            arr[i][j]=0;
        }
    }
     return false;
}


int main(){

// Place n Queens on a chess board. Assume 1 when Queen is placed on a point i,j
    int board[20][20]{0};  // initialize board with zeros 
    int n ; 
    cin >> n ; 

    solveNQueen(board,n,0); // 0 is the first row. this is where the recursion start! 
    return 0; 
}