/*
#include <iostream>
using namespace std;

// function by value 
// void swap(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// function by return 
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    //Pointers : it is a variable which is used to store the address of another variable , 
    // or it stores the address where the actual data is kept inside the memory.

    //Declaration  of pointers :
    // syntax : 1.  data_type* pointerName; 
    // 2.  data_type *pointerName;

    // Example:
    // int num = 45;
    // cout << num << endl;
    // how to print the address of above variable 'num' : &variableName;
    // cout << &num << endl;


    // Declaring a pointer:
    // int* ptr = &num;
    // cout << &num << endl;
    // cout << ptr << endl;

    // to print the value at certain address using pointer
    // -> *dereference operator
    // syntax -> *pointerName
    // cout << *ptr << endl;

    int a = 45;
    int b = 50;

    swap(&a,&b);
    cout << "A: " << a << " , B: " << b << endl;


}
*/


/*
#include <iostream>
using namespace std;


int main(){

    int nums[] = {23,56,12,89,44,13,90};
    // cout << nums << endl;

    int *ptr = nums;
    // cout << ptr << endl;
    cout << *ptr << "-----" << ptr << endl;
    cout << *(ptr+1) << "-----" << (ptr+1) << endl;
    cout << *(ptr+2) << "-----" << (ptr+2) << endl;
    cout << *(ptr+3) << "-----" << (ptr+3) << endl;
    cout << *(ptr+4) << "-----" << (ptr+4) << endl;
 
}
*/

/*
#include <iostream>
using namespace std;


int main(){

    int nums[] = {23,56,12,89,44,13,90};

    int* ptr = nums;

    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        // cout << *(ptr+i) << " ";
        cout << *ptr++ << " ";
    }
}
*/


