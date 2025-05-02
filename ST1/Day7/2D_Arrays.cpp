/*
#include <iostream>
using namespace std;

int main(){

    // 2D array : it is a data structure which is used to store cllection/sets of elements in the tabular format shared as a single variable

    //syntax; data_type arrayName[row][column];

    //Example:
    int nums[3][3] = {

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // accessing the element from 2d array? - using index

    // cout << nums[2][1] << endl; // 8
    // cout << nums[1][2] << endl; // 6

    // Loop with 2D array : Nested Loop
    // outer loop : rows
    // inner loop: columns


    // Row? - 
    int rows = sizeof(nums)/sizeof(nums[0]);
    // cout << rows << endl;

    int columns = sizeof(nums[0])/sizeof(nums[0][0]);
    // cout << columns << endl;


    for(int row=0;row<rows;row++){
        for(int col=0;col<columns;col++){
            cout << nums[row][col] << " ";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main(){

    // Task 1 : given a 2d array of numbers , your task is to perform following operation.columns
    // 1. find out the sum of all elements

    int nums[3][3] = {

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum = 0;
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            sum += nums[i][j];
        }
    }
    cout << sum << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main(){

    // Task 1 : given a 2d array of numbers , your task is to perform following operation.columns
    // 2. find out the sum of even numbers row wise if there is no even number row wise then you can print "no even" 

    int nums[3][3] = {

        {1,9,3},
        {4,5,6},
        {7,8,9}
    };
    
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<columns;j++){
            if(nums[i][j]%2==0){
                sum += nums[i][j];
            }  
        }
        if(sum==0){
            cout << "No Even" << endl;
        }
        else{
            cout << sum << endl;
        }  
    }
}
*/

/*

int nums[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
N traversal of above 2d array:
   7      4      1      5      9      6      3
[2][0],[1][0],[0][0],[1][1],[2][2],[1][2],[0][2]









*/