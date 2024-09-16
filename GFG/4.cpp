#include<bits/stdc++.h>
using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> ans;
        int max = arr[n-1];
        ans.push_back(max);
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] >= max) {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
            return ans;
    }
};