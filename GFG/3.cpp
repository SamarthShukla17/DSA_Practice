//Maximum Score from Subarray Minimums


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        for(int i  = 0 ;i<n-1;i++)
        {
            int j = arr[i]+arr[i+1];
            sum=max(sum,j);
        }
        return sum;
    }
};