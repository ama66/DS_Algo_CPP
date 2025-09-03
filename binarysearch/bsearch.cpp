#include <iostream>
using namespace std; 

int binarysearch(int a[],int n,int key){

    int s=0;
    int e=n-1; 
    int mid= 0;
    while (s<=e){
        mid= (s+e)/2 ; 
        if (a[mid]== key){
            return mid;
        }
        else if (a[mid]> key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1; 
}

int main(){
    int arr[]={-1,4,5,6,8,22,35,42};
    int k=42;
    int n =sizeof(arr)/sizeof(arr[0]);
    int p = binarysearch(arr,n,k);
    if (p!=-1){
    cout<< "Key ="<<k<< " found at index "<< p <<endl; 
    }
    else{
        cout<< "Key not found ! "<<endl ; 
    }
    return 0; 
}
