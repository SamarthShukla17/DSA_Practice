#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        int low = 0;int high = arr.size() - 1;
        int floor_index = -1;
        
        while (low <= high){
            int mid = low + (high - low) / 2;
            if (arr[mid] <= k){
                floor_index = mid;
                low = mid +1;
            } else {
                high = mid - 1;
            }
        }
        return floor_index;
        
    }
};