//You are given an m x n integer matrix matrix with the following two properties:

//Each row is sorted in non-decreasing order.
//The first integer of each row is greater than the last integer of the previous row.
//Given an integer target, return true if target is in matrix or false otherwise.

//You must write a solution in O(log(m * n)) time complexity.

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
             int n = matrix.size();
            if (n == 0) return false;
            int m = matrix[0].size();
            int low = 0, high = n * m - 1;
    
            while (low <= high) {
                int mid = low + (high - low)/ 2;
                int midElement = matrix[mid / m][mid % m];
    
                if (midElement == target) {
                    return true;
                }
                else if (midElement < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return false;
        }
    };