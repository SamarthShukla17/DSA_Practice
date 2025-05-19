//Problem Statement: Given an array of integers A and
//an integer B. Find the total number of subarrays having
//bitwise XOR of all elements equal to k.

#include<bits/stdc++.h>
using namespace std;

//brute force approach
// int subarraysWithXorK(vector<int> a, int k){
//     int n = a.size();
//     int cnt = 0;

//     for (int i = 0; i < n; i++){
//         for (int j = i; j < n; j++){
//                 int xorr = 0;
//                 for (int k = i; k <= j; k++){
//                     xorr = xorr ^ a[k];
//                 }
//                 if (xorr == k) cnt++;
//             }
//         }
//         return cnt;
// }


int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}
