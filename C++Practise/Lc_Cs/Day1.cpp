/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        int final = n + m;
        vector<int> merged;

        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        while (i < n) merged.push_back(nums1[i++]);
        while (j < m) merged.push_back(nums2[j++]);

        if (final % 2 == 1) {
            return merged[final / 2];
        } else {
            return (merged[final / 2 - 1] + merged[final / 2]) / 2.0;
        }
    }
};

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};

    Solution sol;  // Create object of class Solution
    double median = sol.findMedianSortedArrays(a, b);  // Call method using object
    cout << "Median: " << median << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            string s = to_string(x);
            int n = s.length();
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]) return false;
            }
            return true;
        }
    };

int main() {
    int x = 121;
    Solution s1;
    bool result = s1.isPalindrome(x);
    cout << "Result : " << result << endl;
    return 0;
}
    
*/

/*
#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;

            int temp = x;
            int ans = 0;
            while(x!=0)
            {
                int n = x % 10;

                if ( (ans > INT_MAX/10) || (ans < INT_MIN/10))
                {
                    return 0;
                }
                ans = (ans * 10) + n;
                x = x / 10;
            }
            if(ans==temp){
                return true;
            }
            return false;
        }
    };

int main() {
    int x = 121;
    Solution s1;
    bool result = s1.isPalindrome(x);
    cout << "Result : " << result << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <vector>  
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> a = {1, 3, 5};
    int target = 8;
    Solution s1;
    vector<int> result = s1.twoSum(a, target);

    
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;

    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 5, 3, 1};  
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);
    cout << "The unique element is: " << unique << endl;

}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    vector<int> elements;
    vector<int> frequencies;

    // Count frequencies manually
    for (int i = 0; i < arr.size(); ++i) {
        bool found = false;
        for (int j = 0; j < elements.size(); ++j) {
            if (arr[i] == elements[j]) {
                frequencies[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            elements.push_back(arr[i]);
            frequencies.push_back(1);
        }
    }

    // Check for unique frequencies
    for (int i = 0; i < frequencies.size(); ++i) {
        for (int j = i + 1; j < frequencies.size(); ++j) {
            if (frequencies[i] == frequencies[j]) {
                return false; // duplicate frequency found
            }
        }
    }

    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};   // true
    vector<int> arr2 = {1, 2, 2, 1, 3, 3};   // false

    cout << boolalpha << uniqueOccurrences(arr1) << endl;
    cout << boolalpha << uniqueOccurrences(arr2) << endl;

    return 0;
}
*/

