/*
#include<iostream>
using namespace std;

int main() {

    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout << " address of num is " << &num << endl;

    int *ptr = &num;

    cout << " value is : " << *ptr << endl;
    cout << " address is : " << ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << " value is : " << *p2 << endl;
    cout << " address is : " << p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main() {

    // pointer to int is created,ans pointing to some garbage value
    //int *p = 0;

    //cout << *p << endl;

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << " a after " << num << endl;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << " after " << num << endl;
    
    //copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // important concept 
    int i = 3;
    int *t = &i;
    //cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t+ 1;
    cout << " after t " << t << endl;

}
*/
//#include<iostream>
//using namespace std;

//int main() {

    //int arr[10] = {23,122, 41,67};
    /*
    cout << " address of first memory block " << arr << endl;
    cout << arr[0] << endl;
    cout << " address of first memory block " << &arr[0] << endl;

    cout << " 4th " << *arr << endl;
    cout << " 5th " << *arr + 1 << endl;
    cout << " 6th " << *(arr + 1) << endl;
    cout << " 7th " << *(arr) + 1 << endl;
    cout << " 8th " << arr[2] << endl;
    cout << " 9th " << *(arr + 2) << endl;

    int i =3;
    cout << i[arr] << endl;

   int temp[10] = {1,2};
   cout << sizeof(temp) << endl;
   cout <<  " first " << sizeof(*temp) << endl;
   cout <<  " second " << sizeof(&temp) << endl;
   cout <<  " third " << sizeof(*temp) << endl;


   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
   cout << sizeof(&ptr) << endl;
   
   int a[20] = {1,2,3,5};
   //cout<< "->" << &a[0] << endl;
   //cout << &a << endl;
   //cout << a << endl;

   int *p = &a[0];
   //cout << p << endl;
   //cout << *p << endl;
   cout << " -> " << &p << endl;

   int arr[10];

   // ERROR
   //arr = arr+1;

   int *ptr = &arr[0];
   cout << ptr << endl;
   ptr = ptr + 1;
   cout << ptr << endl;

   int arr[5] = {1,2,3,4,5};
   char ch[6] = "abcde";

   cout << arr << endl;
   cout << ch << endl;

   char *c = &ch[0];
   cout << c << endl;

   char temp = 'z';
   char *p = &temp;

   cout << p << endl;



   return 0;

}
*/

#include<iostream>
using namespace std;
/*
// 18th QUESTION ->
void update(int *p) {
    *p = (*p) * 2;
   }

   int main() {
    int i = 10;
    update(&i);
    cout << i << endl;
   }
   
  // 19th QUESTION ->
  void fun(int arr[]) {
    cout << arr[0] << " ";
  }
  int main() {
    int arr[] = {11, 12, 13, 14};
    fun(arr + 1);
    cout << arr[0] << endl;
  }
  
  // 20th QUESTION ->
  void square(int *p) {
    int a = 70;
    p = &a;
    *p = (*p) * (*p);
  }
  int main() { 
    int a = 70;
    square(&a);
    cout << a << endl;
  }
  
  // 24th QUESTION ->
  #include<iostream>
  using namespace std;

  void increment(int **p) {
    ++(**p);
  }
  int main() {
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
  }
  
  // 25th QUESTION ->
  int main(){
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    return 0;
  }
  
  // 26th QUESTION ->
  int main() {
    char *p;
    char str[] = "pqrstuv";
    p = str;
    p+=3; 
    cout << p;
    return 0;

  }
  
  // 27th QUESTION ->
  int main() {
    char arr[20];
    int i;
    for(i=0;i<10;i++) {
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr;
    return 0; 
  }
  
  // 28th QUESTION ->
  int main () {
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout << *ptr2 << " ";
    cout << ptr2 - ptr1;
    return 0;
  }
  
 // 29th QUESTION ->
 int main() {
    char st[] = "ABCD";
    for(int i=0 ; st[i] != '\0'; i++) {
        cout << st[i] << " " << *(st)+i << " " << *(i+st) << " " << i[st];
    }
    return 0;
 }
 
// 30th QUESTION ->
void Q(int z) {
    z += z;
    cout << z << " ";
}
void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout << x << " ";
}

int main() {
    int x = 5;
    P(&x);
    cout << x;
    return 0;
}

// 31st QUESTION ->
int main() {
    int ***r, **q, *p, i=8;
    p = &i;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r;
    return 0;
}
*/


  