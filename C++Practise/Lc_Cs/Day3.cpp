#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTripletsWithZeroSum(vector<int> &arr, int n) {
    vector<vector<int>> ans;
    
    // Sort the array to use two-pointer technique and ensure sorted triplets
    sort(arr.begin(), arr.end());
    
    // Fix the first element and find two others using two pointers
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first element to avoid duplicate triplets
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int left = i + 1, right = n - 1;
        
        // Use two pointers to find a pair summing to -arr[i]
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                // Found a triplet: store it
                ans.push_back({arr[i], arr[left], arr[right]});
                
                // Skip duplicates for left and right pointers
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < 0) {
                left++; // Need a larger sum
            } else {
                right--; // Need a smaller sum
            }
        }
    }
    
    return ans;
}

int main() {
    int n;
    
    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;
    
    // Input array elements
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find triplets with zero sum
    vector<vector<int>> result = findTripletsWithZeroSum(arr, n);
    
    // Print the result
    if (result.empty()) {
        cout << "No triplets found with sum 0" << endl;
    } else {
        cout << "Triplets with sum 0:" << endl;
        for (const auto &triplet : result) {
            cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
        }
    }
    
    return 0;
}