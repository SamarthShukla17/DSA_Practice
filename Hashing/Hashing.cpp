// Hashing is prestoring and fetching
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    //precompute:
    int hash[100] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        // fetching:
        cout << hash[num] << endl;
    }
    return 0;
}