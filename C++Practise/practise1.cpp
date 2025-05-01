#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }

    int diagonalSum1 = 0;
    int diagonalSum2 = 0;

    for(int i=0;i<n;i++){
        diagonalSum1 += matrix[i][i];
        diagonalSum2 += matrix[i][n-i-1];
    }

    int diff = diagonalSum1 - diagonalSum2;
    cout << "Diff : " << diff << endl;

    return 0;
}