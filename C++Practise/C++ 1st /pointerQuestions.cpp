 /*
#include<iostream>
using namespace std;

int& func(int a) {
    // BAD practise
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
// BAD practise 
   // int* ptr = n;
   // return ptr;
}
void update1(int n) {
    n++;
}
void update2(int& n) {
    n++;
}

int main() {
    
    int i = 5;
    // create a ref variable
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 5;

    cout << " before " << n << endl;
    update2(n);
    cout << " after " << n << endl;

    fun(n );


    return 0;
}

// heap memory allocation(int,char,1D array)

#include<iostream>
using namespace std;

int getSum(int *arr , int n) {

    int sum = 0;
    for(int i=0; i<n ; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {

   // char ch = 'q';
   // cout << sizeof(ch) << endl;

    // char*c = &ch;
    // cout << sizeof(c) << endl;
   // int* arr = new int[5];

   int n;
   cin >> n;
   // variable size array
   int* arr = new int[n];
   
   // taking input in array
   for(int i=0; i<n ; i++) {
    cin >> arr[i];
   }

   int ans = getSum(arr, n );

   cout << " answer is " << ans << endl;
   // case 1
   while(true) {
    int i = 5;
   }

   // case 2
   while(true) {
    int* ptr = new int;
   }

   return 0;

}

// heap memory allocation(2D array)

#include<iostream>
using namespace std;


int main() {
   // take n for same no. of rows and columns
   //int n;
   //cin >> n;

   // for diff row and col count
   int row;
   cin >> row;

   int col;
   cin >> col;
   
    int** arr = new int*[row];
    
    // creating a 2D array
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }


    // taking input 
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }
    
    // taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    // releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;
}
*/
// heap memory allocation(2D jaggered array)

#include<iostream>
using namespace std;


int main() {

    int row;
    cout << " number of rows " << endl;
    cin >> row;

    int col;
    cout << " number of col " << endl;
    cin >> col;

    int c[col];
    cout<< " enter col array " << endl;

    for(int i=0; i<col; i++) {
        cin >> c[i];
    }

    int** a = new int* [row];

    for(int i=0; i<row; i++) {
        a[i] = new int[c[i]];
    }
    cout << " enter array element " << endl;

    for(int i=0; i<row; i++) {
        for(int j=0; j<c[i]; j++) {
            cin >> a[i][j];
        }
    }
    cout << " output " << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<c[i];j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}