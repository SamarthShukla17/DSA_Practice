#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    if (n==1) return;
    
    for (int i = 0; i <= n-2; i++)
    {
        if (arr[i] > arr[i+1])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
}

int main(){
    int n;
    cin >> n;
    int arr [n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "\n";

    bubble_sort(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}