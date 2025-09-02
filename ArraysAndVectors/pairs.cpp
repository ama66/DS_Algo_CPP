#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> Arr = {1, 4, 6, 3, 5, 2};

//     arr = [1, 4, 6, 3, 5, 2]
// 
  int target_sum = 7 ; 

  int a1=0 ; 
  int a2=0 ; 
    // Print all elements (no trailing comma) O(n^2) Brute force Solution
    for (size_t i = 0; i < Arr.size(); i++) {
       a1=Arr[i];
       for (size_t j=i+1; j< Arr.size(); j++){
        a2=Arr[j];
        if (a1+a2==target_sum){
         cout << "(" << a1 << "," << a2 << ")" << endl;

        }
       }
    }
    cout << endl;  // keep VS Code messages on a new line

    return 0;  // <- make sure this semicolon exists
}
