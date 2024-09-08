#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int c = 0;
       int e;

       for(int i = 0; i < n; i++){
        if (c == 0){
            c = 1;
            e = nums[i];
        }
        else if (e == nums[i]) c++;
        else c--;
       }
       int c1 = 0;
       for(int i = 0; i < n; i++){
        if(nums[i] == e) c1++;
       }
       if(c1 > (n/2)) return e;
       return -1;
    }
};