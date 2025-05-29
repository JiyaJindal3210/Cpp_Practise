/*
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTripletsWithZeroSum(vector<int> &arr, int n) {
    vector<vector<int>> ans;
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int left = i + 1, right = n - 1;
        
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                ans.push_back({arr[i], arr[left], arr[right]});
                
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < 0) {
                left++; 
            } else {
                right--; 
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
*/

/*
#include <iostream>
using namespace std;

void printArray(int arr[] ,int n){

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortOne(int arr[] , int n){

    int left = 0 , right = n-1;

    while(left < right){

        while(arr[left]==0 && left < right){
            left++;
        }
        while(arr[right]==1 && left < right){
            right--;
        }
        
        if(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

    
}

int main() {
    
    int arr[8] = {1,1,0,0,0,0,1,0};
    SortOne(arr,8);
    printArray(arr,8);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void printArray(int arr[] ,int n){

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int *arr, int n)
{
   int low = 0, mid = 0, high = n - 1;
    

   while (mid <= high) {

      if (arr[mid] == 0) {
         swap(arr[low], arr[mid]);
         low++;
         mid++;
      } 
      
      else if (arr[mid] == 1) {
         mid++;
      }

      else { 
         swap(arr[mid], arr[high]);
         high--;
      }

   }

   
   
}

int main() {
    
    int arr[9] = {1,2,1,0,2,0,1,0,2};
    sort012(arr,9);
    printArray(arr,9);

    return 0;
}
*/

#include <iostream>
using namespace std;

char highestOccurringChar(char input[]) {
    int freq[26] = {0};

    // Count frequency of each character
    for (int i = 0; input[i] != '\0'; i++) {
        freq[input[i] - 'a']++;
    }

    int maxFreq = -1;
    char maxChar;

    // Find highest occurring character (first with max freq)
    for (int i = 0; input[i] != '\0'; i++) {
        int index = input[i] - 'a';
        if (freq[index] > maxFreq) {
            maxFreq = freq[index];
            maxChar = input[i];
        }
    }

    return maxChar;
}

int main() {
    char input[1000001]; // Input size up to 10^6
    cout << "Enter a lowercase string: ";
    cin >> input;

    char result = highestOccurringChar(input);
    cout << "Highest occurring character: " << result << endl;

    return 0;
}
