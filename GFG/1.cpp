//Union of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        set <int> s;
        vector <int> Union;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            s.insert(arr2[i]);
        }
        for(auto & it: s){
            Union.push_back(it);
            return Union;
        }
    }
};