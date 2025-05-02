//Floyd's Tortoise and Hare algorithm


#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
           int slow = nums[0];
        int fast = nums[0];
    
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
    
        // Phase 2: Find entrance to cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
    
        return slow; 
        }
    };
