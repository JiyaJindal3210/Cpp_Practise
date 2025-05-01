/*
#include<iostream>
using namespace std ;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z') {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e]) ) {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n ) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0; 
    for(int i = 0 ; name[i]!= '\0'; i++) {
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};

    for(int i = 0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            int number = ch - 'a';
        }
        else{//uppercase
            number = ch -'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' +ans;
    return finalAns;
}
int main( ) {

    char name[20];

    cout << "enter your name " << endl;
    cin>> name;
    //name[2] = '\0';

    cout<< "your name is " << endl;
    cout << name << endl;
    int len = getLength(name);
    cout << "length : " << len << endl;
    reverse(name, len);
    cout << "your name is ";
    cout << name << endl;

    cout << " Palindrome or Not : " << checkPalindrome(name, len) << endl;
 
    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;
    
    string s ;
    cin >> s;
      cout << getMaxOccCharacter(s) << endl;

    return 0;
}
*/

#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target ,int row, int col) {
    
    for(int row=0 ; row<3; row++) {
        for(int col=0 ; col<3; col++) {
            if( arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

// to print col wise sum
void printColSum(int arr[][3], int row, int col) {
    cout << " printing col sum " << endl;
    for(int col=0 ; col<3 ; col++) {
        int sum = 0;
        for(int row=0 ; row<3 ; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// to print row wise sum
void printRowSum(int arr[][3], int row, int col) {
    cout << " printing row sum " << endl;
    for(int row=0 ; row<3 ; row++) {
        int sum = 0;
        for(int col=0 ; col<3 ; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row , int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0 ; row<3 ; row++) {
        int sum = 0;
        for(int col=0 ; col<3 ; col++) {
            sum += arr[row][col];
        }
        
        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << " the maximum sum is " << maxi << endl;
    return rowIndex;
    
}
int main() {

    //create 2 d array
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,4,16};
    //int arr[3][4] = { {1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333} } ;
    int arr[3][3];
    
    cout << " enter the elements " << endl;
    //taking input -> row wise input
    for(int row=0 ; row<3; row++) {
        for(int col=0 ; col<3; col++) {
            cin >> arr[row][col];
        }
    }
/*
    //taking input -> column wise input
    for(int col=0 ; col<4; col++) {
        for(int row=0 ; row<3; row++) {
            cin >> arr[row][col];
        }
    }
*/
    cout << " printing the array " << endl;
    //print
    for(int row=0 ; row<3; row++) {
        for(int col=0 ; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
/*
    cout << " enter the element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr , target , 3 ,3 )) {
        cout << " element found " << endl;
    }
    else 
    {
        cout << " not found " << endl;
    }
    
    printColSum(arr, 3, 3 );
    printRowSum(arr, 3, 3 );
*/  
    int ansIndex = largestRowSum(arr,3,3);
    cout << " Max row is at index " << ansIndex << endl;
    return 0;

}