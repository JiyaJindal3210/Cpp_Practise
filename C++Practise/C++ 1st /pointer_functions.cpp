/*
#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl;
}

void update(int *p) {

   // p = p + 1;
    //cout << "inside " << p << endl;
    *p = *p + 1;
}

int getSum(int arr[], int n) {

    cout << endl << " size: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0 ; i<n ; i++) {
        sum += i[arr];
    }
    return sum;
}

int main() {
    /*
    int value = 5;
    int *p = &value;

    //print(p);
    
    cout << " before " << *p << endl;
    update(p);
    cout << " after " << *p << endl;
    


    int arr[6] = {1,2,3,4,5,8};

    cout << " sum is " << getSum(arr+3,3) << endl;


    return 0;
}

*/
/*
#include<iostream>
using namespace std;

//void update(int **p2) {
   //p2 = p2 + 1;
     //kuch change hoga -> NO

    //*p2 = *p2 + 1;
    // kuch change hoga -> YES(p main pdi value change hogi)

    //**p2 = **p2 + 1;
    // kuch change hoga -> YES(i main pdi value change hogi)

//}
int main() 
    //int i = 5;
    //int *p = &i;
    //int **p2 = &p;

    cout << endl << endl << "sab sahi chl rha hai " << endl << endl;
    //cout << "printing p" << p << endl;
    //cout << "address of p" << &p << endl;

    //cout << *p2 << endl;
/*
    cout << i << endl;
    cout << *p << endl;
    cout  << **p2 << endl;

    cout << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    
    cout << endl;

    cout << &p << endl;
    cout << p2 << endl;
    
   cout << endl << endl;;
   cout << "before" << i << endl;
   cout << "before" << p << endl;
   cout << "before" << p2 << endl;
   update(p2);
   cout << "after" << i << endl;
   cout << "after" << p << endl;
   cout << "after" << p2 << endl;
   cout << endl << endl;
   
// FIRST QUESTION -> 
   int first = 8;
   int second = 18;
   int *ptr = &second;
   *ptr = 9;
   cout << first << " " << second << endl;
   
   // SECOND QUESTION -> 
   int first = 6;
   int *p = &first;
   int *q = p;
   (*q)++;
   cout << first << endl;
   
   // THIRD QUESTION ->
   int first = 8;
   int *p = &first;
   cout << (*p)++ << " ";
   cout << first << endl;
   
   // FOURTH QUESTION ->
   int *p = 0;
   int first = 110;
   *p = first;
   cout << *p << endl;
   
   //FIFTH QUESTION -> 
   int first = 8;
   int second = 11;
   int *third = &second;
   first = *third;
   *third = *third + 2;
   cout << first << " " << second << endl;
   
   // SIXTH QUESTION -> 
   float f = 12.5;
   float p = 21.5;
   float *ptr = &f;
   (*ptr)++;
   *ptr = p;
   cout << *ptr << " " << f << " " << p << endl;
   
   // SEVENTH QUESTION ->
   int arr[5];
   int *ptr;
   cout << sizeof(arr) << " " << sizeof(ptr) << endl;
      
   // EIGHTH QUESTION ->
   int arr[] = {11, 21, 13, 14};
   cout << *(arr) << " " << *(arr+1) << endl; 
   
   // NINTH QUESTION ->
   int arr[6] = {11, 12, 31};
   cout << arr << " " << &arr << endl;
   
   // TENTH QUESTION ->
   int arr[6] = {11, 21, 31};
   cout << (arr + 1) << endl;
   
   // 11th QUESTION ->
   int arr[6] = {11, 21, 31};
   int *p = arr;
   cout << p[2] << endl;
   
   // 12th QUESTION ->
   int arr[] = {11, 12, 13, 14, 15};
   cout << *(arr) << " " << *(arr + 3);
   
   // 13th QUESTION ->
   int arr[] = {11, 21, 31, 41};
   int *ptr = arr++;
   cout << *ptr << endl;
   
   // 14th QUESTION ->
   char ch ='a';
   char *ptr = &ch;
   ch++;
   cout << *ptr << endl;
   
   // 15th QUESTION ->
   char arr[] = "abcde";
   char *p = &arr[0];
   cout << p << endl;
   
   // 16th QUESTION ->
   char arr[] = "abcde";
   char *p = &arr[0];
   p++;
   cout << p << endl;
   
   // 17th QUESTION ->
   char str[] = "babbar";
   char *p = str;
   cout << str[0] << " " << p[0] << endl;
   
   // 21st QUESTION ->
   int first = 10;
   int *p = &first;
   int **q = &p;
   int second = 20;
   *q = &second;
   (*p)++;
   cout << first << " " << second << endl;
   
   // 22nd QUESTION ->
   int first = 110;
   int *p = &first;
   int **q = &p;
   int second = (**q)++ + 9;
   cout << first << " " << second << endl; 
   
   // 23rd QUESTION ->
   int first = 100;
   int *p = &first;
   int **q = &p;
   int second = ++(**q);
   int *r = *q;
   ++(*r);
   cout << first << " "<< second << endl;
   return 0;

}
*/

// 32nd question ->

    int f(int x, int*py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x+ y + z;
    }




