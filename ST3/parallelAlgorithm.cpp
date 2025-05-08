// Example 1 : Addition of two 1d array and store the result in third array

/*
#include <iostream>
#include <thread>
using namespace std;

void addArray(int A[],int B[],int result[] , int index){
    result[index] = A[index] + B[index];
}

int main() {

    int num1[] = {1,2,3,4,5};
    int num2[] = {6,7,8,9,10};
    int result[5] = {0};

    thread threads[5];

    for(int i=0;i<5;i++){
        threads[i] = thread(addArray,num1,num2,result,i);
    }

    for(auto& t: threads){
        t.join();
    }

    cout << "Result is: ";
    for(int i=0;i<5;i++){
        cout << result[i] << " ";
    }
    cout << endl;
}
*/

/*
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void addArray(const vector<int>&A, const vector<int>&B, vector<int>&result, int index) {
    result[index] = A[index] + B[index];
}

int main() {
    vector<int> num1 = {1, 2, 3, 4, 5};
    vector<int> num2 = {6, 7, 8, 9, 10};
    vector<int> result(5, 0);

    vector<thread> threads;

    for (int i = 0; i < 5; i++) {
        threads.push_back(thread(addArray, ref(num1), ref(num2), ref(result), i));
    }

    for (auto& t : threads) {
        t.join();
    }

    cout << "Result is: ";
    for (int i = 0; i < 5; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <thread>
using namespace std;

const int rows = 3;
const int cols = 3;

void addArray(int A[][cols] , int B[][cols] , int result[][cols] , int row){
    for(int j=0;j<cols;j++){
        result[row][j] = A[row][j] + B[row][j];
    }
}

int main() {
    int num1[rows][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int num2[rows][cols] = {
        {2,3,8},
        {7,5,1},
        {4,6,9},
    };
    int result[rows][cols] = {0};
    thread threads[rows];

    for(int i=0;i<rows;++i){
        threads[i] = thread(addArray,num1,num2,result,i);
    }

    for(int i=0;i<rows;++i){
        threads[i].join();
    }

    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
#include <thread>
#include <vector>
using namespace std;


void addArray(const vector<vector<int>>& A  ,const vector<vector<int>>& B , vector<vector<int>>& result , int row){
    int cols = A[0].size();
    for (int col = 0; col < cols; ++col) {
        result[row][col] = A[row][col] + B[row][col];
    }

}

int main() {
    vector<vector<int>> nums1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    vector<vector<int>> nums2 = {
        {2,3,8},
        {7,5,1},
        {4,6,9},
    };

    int rows = nums1.size();
    int cols = nums1[0].size();

    vector<vector<int>> result(rows,vector<int>(cols,0));
    vector<thread> threads;

    for(int i=0;i<rows;++i){
        threads.push_back(thread(addArray,ref(nums1),ref(nums2),ref(result),i));
    }

    for(auto& t : threads){
        t.join();
    }

    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
*/

