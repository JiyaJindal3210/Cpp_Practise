/*
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[3] = {10,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;

}
*/

/*

#include <iostream>
using namespace std;

int main() {

    int arr[100]={4,8,1,7};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){

        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Largest element: " << max << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[4]={4,8,1,7};
    int min = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){

        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Smallest element: " << min << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[4] = {5,10,15,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value;
    cin >> value;
    int count = 0;

    for(int i=0;i<size;i++){
        if(arr[i]<value){
            count++;
        }
    }
    cout << "Count: " << count << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[6] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Even numbers: ";
    for(int i=0;i<size;i++){

        if(arr[i]%2==0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[6] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Odd numbers: ";
    for(int i=0;i<size;i++){

        if(arr[i]%2!=0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[4] = {3,7,9,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int number;
    cin >> number;

    cout << "Number found: ";
    for(int i=0;i<size;i++){
        if(arr[i]==number){
            cout << "true " << endl;
        }
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {5,10,15,20,25};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(i==0){
            cout << "First element: " << arr[i] << endl;
        }
        else if(i==size-1){
            cout << "Last element: " << arr[i] << endl;
        }
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int revArray[5] = {};

     for (int i = 0; i < size; i++) {
        revArray[i] = arr[size - 1 - i];
    }

    cout << "Reversed Array: {";
    for (int i = 0; i < size; i++) {
        cout << revArray[i];
        if (i < size - 1) {
            cout << ", "; 
        }
    }
    cout << "}" << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {12,3,5,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int EvenCount = 0;
    int OddCount = 0;

    for(int i=0;i<size;i++){

        if(arr[i]%2==0){
            EvenCount++;
        }
        else{
            OddCount++;
        }
    }
    cout << "Even count: " << EvenCount << ", ";
    cout << "Odd count: " << OddCount << endl;

}
*/

/*
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "Array is sorted: true" << endl;
    } 

    return 0;
}
*/

/*
#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    sort(mergedArray, mergedArray + size1 + size2);

    cout << "Sorted Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>  // For sorting the array
using namespace std;

int main() {

    int arr[7] = {1, 2, 2, 3, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    int count = 1;
    cout << "Frequency: " << endl;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;  
        } 
        else {
            cout << arr[i - 1] << ": " << count <<  endl;
            count = 1; 
        }
    }
    
    cout << arr[size - 1] << ": " << count <<  endl;

    return 0;
}
*/


