#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<=n-1; i++){
        int j=i;
        while (j > 0 && nums[j-1] > nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }

    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    }
};