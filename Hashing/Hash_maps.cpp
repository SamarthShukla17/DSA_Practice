//syntax:
//map<data type of key, data type of value>
//unordered_map<data type of key, data type of value>
//map stores all elements in sorted form whereas unordered_map does not follow any specific order.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    // iterate over the map:
     for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch:
        cout << mp[num] << endl;
    }
    return 0;
}