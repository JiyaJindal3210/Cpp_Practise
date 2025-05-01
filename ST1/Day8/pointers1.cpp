/*
#include <iostream>
#include <vector>
using namespace std;

// int* createArray(int size){
//     int nums[size]
//     int* arr = nums;
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }
//     return arr;
// }

vector<int> createArray(int size){
    vector<int> arr;

    for(int i=0;i<size;i++){
        arr.push_back(i+1)
    }
    return arr;
    
}

int main(){

    // pointer : its a variable which store address of other variable

    // task : create an array of numbers of user's choice , take input for the same , and perform following operation using pointer and also take input using pointer.
    //1. print the array elements in reverse manner
    //3. find out total sum of all elements
    //4. find out the prime number in the array as well;

    // int size;
    // cout << "Enter the size for the array: ";
    // cin >> size;

    // int nums[size];

    // int *ptr = nums;

    // // to add numbers to above array using pointers
    // for(int i=0;i<size;i++){
    //     cout << "Enter the number for index " << i << " : ";
    //     cin >> *(ptr + i);
    // }

    // for(int i=0;i<size;i++){
    //     cout << *(ptr + i) << " ";
    // }
    
    // int sum =0;
    // for(int i=0;i<size;i++){
    //     sum += *(ptr + i);
    // }

    // cout << "Sum is: " << sum << endl;

    // ptr = nums + size - 1;
    // for(int i=0;i<size;i++){
    //     cout << *(ptr - i) << " ";
    // }

    int size = 10;
    vector<int> nums = createArray(size);
    int* ptr = &nums[0];
    cout << *ptr << endl;

}
*/


/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> filterEvenNumbers(int* arr,int size){
    vector<int> evenNums;
    for(int i=0;i<size;i++){
        if(*(arr+i)%2==0){
            evenNums.push_back(*(arr+i));
        }
    }
    return evenNums;
}

vector<int> filterOddNumbers(int* arr,int size){
    vector<int> oddNums;
    for(int i=0;i<size;i++){
        if(*(arr+i)%2!=0){
            oddNums.push_back(*(arr+i));
        }
    }
    return oddNums;
}
int main(){

    int nums[] = {34,1,2,67,45,34};

    vector<int> enums = filterEvenNumbers(nums,sizeof(nums)/sizeof(nums[0]));

    for(int ele: enums){
        cout << ele << " ";
    }
    cout << endl;

    vector<int> onums = filterOddNumbers(nums,sizeof(nums)/sizeof(nums[0]));

    for(int ele: onums){
        cout << ele << " ";
    }
    cout << endl;
}
*/


// #include <iostream>
// #include <vector>
// using namespace std;

// void printElementOfAnyTypeArray(void *arr,int size, char type){
//     if(type=='i'){
//         //integer array
//         int* intArr = (int* )arr;
//     }
//     else if(type=='f'){
//         float* intArr = (float* )arr;
//     }
//     else{
//         char* intArr = (char* )arr;
//     }
// }

// int main(){

    //pointers with string:

    // string name = "chintu";

    // char* ptr = &name[0];

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << *(ptr+1) << endl;
    // cout << *(ptr+2) << endl;

    // char names[] = "chintu";
    // char* ptr = &names[0];

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << *(ptr+1) << endl;
    // cout << *(ptr+2) << endl;

// -----------------------------------------------

    // types of pointers:
    //1. null pointer

    // int *ptr = nullptr;
    // cout << ptr << endl;
    

    //2. void pointer: it is used when you dont have infom about variable type 

    // int num = 10;
    // void* ptr = &num;
    // //t get the value , you need to typecast
    // cout << ptr << endl;
    // cout << *(int*)ptr << endl;


    //good eg:
    // int arr1 [] = {1,2,3,4,5,6,7,8,9};
    // float arr2 [] = {1.2,2.56,3.67,4.6,5.5,6.45,7.9,8.0,9.78};
    // char arr3 [] = {'a','p','p','l','e','\0'};
    // printElementOfAnyTypeArray(arr1, sizeof(arr1)/sizeof(arr1[0]));
    // printElementOfAnyTypeArray(arr2, sizeof(arr2)/sizeof(arr2[0]));
    // printElementOfAnyTypeArray(arr3, sizeof(arr1)/sizeof(arr1[0]));

    //3. Dangling pointer:
    // int num = 10;
    // int * ptr = &num;
    // delete ptr; // removed from the memory
    // ptr = nullptr; // removed from the memory
    // cout << ptr << endl;


// }