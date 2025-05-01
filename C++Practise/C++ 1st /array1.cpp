/*
#include<iostream>
using namespace std ;

void printArray(int arr[], int size ) {

    cout << " printing the array " << endl;

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
    cout << " printing DONE " << endl;
}

int main() {

    //declare
    int number[15];

    cout << " value at 14 index " << number[14] << endl;

    //cout << " value at 20 index " << number[20] << endl;

    int second[3] = {5 , 7 , 11} ;

    cout << " value at 2 index " << second[2] << endl;

    int third[15] = {2 , 7 } ;

    int n = 15;
    printArray(third , 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout << " size of third is " << thirdSize << endl;

    int fourth[10] = {0};

    n = 10;
    printArray(fourth , 10);

    int fifth[10] = {1};

    n = 10;
    printArray(fifth , 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << " size of fifth is " << fifthSize << endl;

    char ch[5] = {'a' , 'b' , 'c' , 'r' , 'p' };
    cout << ch[3] << endl;

    cout << " printing the array " << endl;

    for(int i = 0 ; i < 5 ; i++) {
        cout << ch[i] << " ";
    }
    cout << " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << endl << " Everything Is Fine " << endl << endl;

    return 0;
}
 
             //MaxMin In Arrays

#include<iostream>
using namespace std ;

int getMax(int num[] , int n) {

    int maxi = INT_MIN;

    for(int i = 0 ; i < n ; i++) {

        maxi = max(maxi , num[i]);

        //if(num[i] > max) {
         //   max = num[i];
        //}
    }

    return maxi;

}

int getMin(int num[] , int n) {

    int mini = INT_MAX;

    for(int i = 0 ; i < n ; i++) {

        mini = min(mini , num[i]);

        //if(num[i] < min) {
           // min = num[i];
        //}
    }

    return mini;

}

int main() {

    int size;
    cin>>size;

    int num[100];

    for(int i = 0 ; i < size ; i++) {
        cin>> num[i];
    }

    cout << " maximum value is " << getMax(num , size) << endl;
    cout << " minimum value is " << getMin(num , size ) << endl;

    return 0;
}

#include<iostream>
using namespace std ;

void update(int arr[] , int n ) {

    cout << endl << " inside the function" << endl;

    arr[0] = 120;
    
    for (int i = 0 ; i<3 ; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;


    cout << " going back to main function" << endl;
}
int main() {

    int arr[3] = { 1,2,3};

    update(arr , 3);


    cout << endl << "printing the main function" << endl;
    for (int i = 0 ; i <3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}   

//QUESTIONS : 

#include<iostream>
using namespace std ;

int sumArr(int a[] , int n ) {
    int sum = 0;

    for (int i = 0 ; i<n ; i++) {
        sum =  sum + a[i];
    }
    return sum ;
}

int main() {

    int a[100];
    int size;
    cout << " enter the size of array : ";
    cin>> size;
    cout << " enter the element of array : ";
    for (int i = 0 ; i<size ; i++) {
        cin >> a[i];
    }
    cout << " the sum of all the elements in the array is " << sumArr(a,size) << endl; 
}
 
// LINEAR SEARCH : 

#include<iostream>
using namespace std ;

bool search(int arr[] , int size , int key) {
    
    for(int i = 0 ; i< size ; i++) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}

int main() {

    int arr[10] = { 5 , 7 , -2 , 10 , 22 , -2 , 0 , 5 , 22 , 1 };

    cout << " enter the element to search for  " << endl;
    int key;
    cin>>key;

    bool found = search(arr , 10 , key);

    if( found ) {
        cout << " key is present " << endl;
    }
    else {
        cout << " key is absent " << endl;
    }
    return 0 ;

}

 // REVERSE AN ARRAY : 

#include<iostream>
using namespace std ;

void reverse(int arr[] , int n ) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[] , int n ) {

    for(int i = 0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {

    int arr[6] = {1,4,0,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr , 6);
    printArray(brr , 5);


    return 0;
}
*/

#include<iostream>
using namespace std ;

void printArray(int arr[] , int n ) {

    for(int i = 0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

void swapAlternate(int arr[] , int size) {

    for(int i = 0 ; i<size ; i+=2) {
        if(i+1 < size) {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main() {

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 8);
    printArray(even , 8);

    cout << endl;

    swapAlternate(odd , 5);
    printArray(odd , 5);


    return 0;
}


