#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = findBound(nums, target, true);
        if (start == -1) return {-1, -1};
        int end = findBound(nums, target, false);
        return {start, end};
    }

    private:
        int findBound(vector<int>& nums, int target, bool        isFirst) {
             int left = 0, right = nums.size() - 1;
             while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target) {
                    if (isFirst) {
                        if (mid == left || nums[mid - 1] != target) {
                            return mid;
                        }
                        right = mid - 1;
                    } else {
                        if (mid == right || nums[mid + 1] != target) {
                            return mid;
                        }
                        left = mid + 1;
                    }
                }
                else if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
             }
             return -1;
        }
};
