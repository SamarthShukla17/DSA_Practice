//Longest SubArray with Sum K


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[], int N, int K){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < N; i++){
        sum += A[i];
        if(sum == K){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - K;
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
};

