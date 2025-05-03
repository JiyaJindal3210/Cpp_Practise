/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr, int n) 
{
    sort(arr.begin(), arr.end()); 

    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            return arr[i]; 
        }
    }

    return -1; 
}

int main() 
{
    int n = 5;
    vector<int> arr = {1, 3, 4, 2, 2};

    cout << "Duplicate: " << findDuplicate(arr, n) << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
	int ans = 0;
	for(int i=0;i<arr.size();i++){
		ans = ans^arr[i];
	}

	for(int i=1;i<arr.size();i++){
		ans = ans^i;
	}

	return ans;
    
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};

    cout << "Duplicate: " << findDuplicate(arr) << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

string replaceSpaces(string &str)
{
	string temp = "";

	for(int i =0; i<str.length();i++) {
		if(str[i] == ' '){
            temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else
		{
            temp.push_back(str[i]);
		}
	}
	return temp;
}

int main() {
    string a = "Hello World";
    cout << "String : " << replaceSpaces(a) << endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << "1";
        for (int j = 2; j < i; j++) {
            cout << 2 << "";
        }
        if (i > 1)
            cout << "1";
        cout << endl;
    }
}

int main() {
	int N;
	cin >> N;
	printPattern(N);
}
*/

/*
#include<iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if(j==0 || j==i){
                cout << "1";
            }
            else {
                cout << "2";
            }
               
        }
        cout << endl;
    }
}
    
int main() {
	int N;
	cin >> N;
	printPattern(N);
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            vector<int> arr1 = {};
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++){
                if(nums[i]==nums[i-1]){
                    arr1.push_back(nums[i]);
                }
            }
            return arr1;
        }
    };

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    Solution s1;
    vector<int> result = s1.findDuplicates(nums);
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            vector<int> freq(nums.size() + 1, 0);
            vector<int> arr;
    
            for (int i = 0; i < nums.size(); i++) {
                freq[nums[i]]++;
                if (freq[nums[i]] == 2) {
                    arr.push_back(nums[i]);
                }
            }
    
            return arr;
        }
    };
    

int main() {
    vector<int> nums = {4,3,2,7,8,2,4,3,1};
    Solution s1;
    vector<int> result = s1.findDuplicates(nums);
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

	for(int i=0;i<n;i++){
		int element  = arr1[i];
		for(int j=0;j<m;j++){
			if(element==arr2[j]){
				ans.push_back(element);
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	return ans;
}

int main() {
    int n = 6;
    int m = 4;
    vector<int> arr1 = {1,2,2,2,3,4};
    vector<int> arr2 = {2,2,3,3};
    vector<int> result = findArrayIntersection(arr1,n,arr2,m);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
*/