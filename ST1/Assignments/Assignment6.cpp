/*
#include <iostream>
using namespace std;

int main() {

    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = sizeof(nums)/sizeof(nums[0]);
    int col = sizeof(nums[0])/sizeof(nums[0][0]);
    int top = 0, bottom = row-1, left = 0, right = col-1;
    
    // Loop until the boundaries collapse
    while (top <= bottom && left <= right) {

        // Print the top row from left to right
        for (int i = left; i <= right; i++) {
            cout << nums[top][i] << " ";
        }
        top++; // Move the top boundary down
        
        // Print the right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            cout << nums[i][right] << " ";
        }
        right--; // Move the right boundary left
        
        if (top <= bottom) {
            // Print the bottom row from right to left
            for (int i = right; i >= left; i--) {
                cout << nums[bottom][i] << " ";
            }
            bottom--; // Move the bottom boundary up
        }
        
        if (left <= right) {
            // Print the left column from bottom to top
            for (int i = bottom; i >= top; i--) {
                cout << nums[i][left] << " ";
            }
            left++; // Move the left boundary right
        }
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = sizeof(nums)/sizeof(nums[0]);
    int col = sizeof(nums[0])/sizeof(nums[0][0]);

    for(int j=0;j<col;j++){

        if ( j&1 ){

            for(int i=row-1;i>=0;i--){
                cout << nums[i][j] << " ";
            }

        }
        else{

            for(int i=0;i<row;i++){
                cout << nums[i][j] << " ";
            }

        }
    }
}
*/


#include <iostream>
using namespace std;

int main() {

    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = sizeof(nums)/sizeof(nums[0]);
    int col = sizeof(nums[0])/sizeof(nums[0][0]);

}