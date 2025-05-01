/*
#include <iostream>
using namespace std;

int main() {
    int size, sum=0;  
    cin >> size;
    int arr[size];
    cout << "enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> *(arr + i);
    }
    int *ptr = arr;
    for(int i = 0; i < size; i++){
        sum += *(ptr + i);
    }
    cout << sum << endl;
}
*/

/*
#include <iostream>
using namespace std;

void reverseArray(int *arr,int size){
    int *start = arr;
    int *end = arr + size - 1;

    while(start<end){
        swap(*start , *end);
        start++;
        end--;
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;  
    cin >> size;
    int arr[size];
    cout << "enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> *(arr + i);
    }

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int getMax(int *arr, int size) {
    int *max = arr;  
    for (int i = 1; i < size; i++) {  
        if (arr[i] > *max) {
            max = &arr[i];  
        }
    }
    return *max;  
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];  
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Original array : ";
    printArray(arr, size);

    cout << "Maximum element : " << getMax(arr, size) << endl;  // Fixed printing issue

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int getMax(int *arr, int size) {
    int maxi = INT_MIN;  
    for (int i = 1; i < size; i++) {  
        maxi = max(maxi,arr[i]);
    }
    return maxi;  
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];  
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Original array : ";
    printArray(arr, size);

    cout << "Maximum element : " << getMax(arr, size) << endl;  // Fixed printing issue

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void swap(int*a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a;
    cout << "Enter first number : ";
    cin >> a;
    int b;
    cout << "Enter second number : ";
    cin >> b;

    cout << "Before Swapping : ";
    cout << "A : " << a << " B : " << b << endl;;
    cout << "After Swapping : ";
    swap(&a , &b);
    cout << "A : " << a << " B : " << b << endl;


    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int countVowels(const char *str){
    int count = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    cin.getline(str, 100);
    cout << "Number of vowels: " << countVowels(str) << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

bool checkPalindrome(const char *str){
    const char *start = str;
    const char *end = str + strlen(str) - 1;

    while(start<end){
        if (*start != *end) {  
            return false;      
        }
        start++;   
        end--; 
    }
    return true;
}

int main() {
    char str[100];
    cin.getline(str,100);

    if (checkPalindrome(str)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
*/