// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); // Number of rows
        if (n == 0) return; // Early return if the matrix is empty
        int m = matrix[0].size(); // Number of columns
        int col0 = 1; // Track if the first column needs to be zeroed
        
        // Step 1: Mark the rows and columns that need to be zeroed
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark row i to be zeroed
                    if (j != 0) {
                        matrix[0][j] = 0; // Mark column j to be zeroed
                    } else {
                        col0 = 0; // Mark that the first column needs to be zeroed
                    }
                }
            }
        }
        
        // Step 2: Use the marks to set matrix elements to 0, starting from row 1 and column 1
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // Step 3: Handle the first row separately
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        
        // Step 4: Handle the first column separately
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};