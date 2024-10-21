//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.


#include <iostream>       
#include <vector>          
#include <unordered_map> 
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums.size();

        for (int num : nums) {
            freq[num]++;
        }

        for (const auto & [num, count]: freq) {
            if (count > n / 3) {
                result.push_back(num);
            }
        }

        return result;
    }
};