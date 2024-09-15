#include <iostream>
#include <vector>
using namespace std;

// Function to find and print all leaders in the array
void findLeaders(const vector<int>& arr) {
    int n = arr.size();
    
    // Vector to store the leaders
    vector<int> leaders;
    
    // Start by considering the rightmost element as a leader
    int maxFromRight = arr[n - 1];
    leaders.push_back(maxFromRight); // Rightmost element is always a leader
    
    // Traverse the array from second last element to the first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    
    // Since we are adding leaders from right to left, we need to reverse the order
    for (int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}