    #include<iostream>
    #include<vector>
    #include<unordered_set>

    using namespace std; 

        vector<pair<int,int>> PairSum(vector<int> arr, int S){
            unordered_set<int> seen; 
            vector <pair<int,int>> result;
            for (size_t i =0; i<arr.size();i++)
            {
                int x = S-arr[i];
                if(seen.find(x)!=seen.end()){
                    result.push_back({x,arr[i]});
                  //  result.push_back(arr[i]);
                    //return result;
                }
                seen.insert(arr[i]);
                        }
            return result; // return empty if no pair found

        }

        
    int main(){

        vector <int>    arr{1,4,6,3,5,2};
        int Sum=7;
        
        auto p= PairSum(arr,Sum);

       if (p.empty()) {
        cout << "No Such Pair!" << endl;
    } else {
        for (const auto &h : p) {
            cout << "(" << h.first << "," << h.second << ")\n";
        }
    }


        return 0;
    }