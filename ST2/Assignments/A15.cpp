//                     Assignment 15 : 

//      Question 1 : 

/*
#include <iostream>
using namespace std;

class Geometry{
    public:
    int calculateArea(int side){
        return side*side;
    }
    int calculateArea(int length, int breadth){
        return length*breadth;
    }
    int calculateArea(double radius){
        return 3.14*radius*radius;
    }
};

int main() {
    Geometry g1;
    cout << g1.calculateArea(3) << endl;
    cout << g1.calculateArea(3,4) << endl;
    cout << g1.calculateArea(4.12) << endl;

}
*/

//           Question 2 :
/*
#include <iostream>
using namespace std;

class Volume{
    public:
    double calculate(int side){
        return side*side*side;
    }
    double calculate(int length,int breadth,int height){
        return length*breadth*height;
    }
    double calculate(double radius, double height){
        return 3.14*radius*radius*height;
    }
};

int main() {
    Volume v1;
    cout << v1.calculate(3) << endl;
    cout << v1.calculate(3,4,5) << endl;
    cout << v1.calculate(4.12,5.76) << endl;
}
*/

//            Question 3 : 
/*
#include <iostream>
using namespace std;

class Bankaccount{
    private:
    int accountNumber;
    int balance;
    string accountHolder;

    public:
    Bankaccount(){
        cout << "Default constructor" << endl;
        cout << endl;
    }

    Bankaccount(int accountNumber , string accountHolder){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << endl;
    }

    Bankaccount(int accountNumber , int balance , string accountHolder){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance : " << balance << endl;
        cout << endl;
    }
};

int main() {
    Bankaccount b1;
    Bankaccount b2(23,45000,"rakesh");
    Bankaccount b3(34,"Rahul");
}
*/

//            Question 4 : 
/*
#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNo;
    char grade;

    public:
    Student(){
        cout << "Default Constructor" << endl;
        cout << endl;
    }
    Student(string name , int rollNo){
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << endl;
    }
    Student(string name,int rollNo,char grade){
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Grade : " << grade << endl;
        cout << endl;
    }
};

int main() {
    Student s1;
    Student s2("rahul",12);
    Student s3("rahul",21,'A');
}
*/

//            Question 5 : 
/*
#include <iostream>
using namespace std;

class Complex{
    private:
    int real , imaginary;

    public:
    Complex(){
        int real = 0;
        int imaginary = 0;
    }

    Complex(int r, int i){
        real = r;
        imaginary = i;
    }

    Complex operator +(Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    Complex operator -(Complex &c5){
        Complex temp1;
        temp1.real = real - c5.real;
        temp1.imaginary = imaginary - c5.imaginary;
        return temp1;
    }

    void print(){
        cout << real << "+" << imaginary << "i" << endl;
    }

};

int main() {
    Complex c1(4,5);
    Complex c2(3,4);
    Complex c3;
    c3 = c1 + c2;
    Complex c4;
    c4 = c1 - c2;
    c3.print();
    c4.print();

}
*/

//            Question 6 : 
/*
#include <iostream>
using namespace std;

const int SIZE = 3;

class Matrix{
    private:
    int mat[SIZE][SIZE];

    public:
    
    // default constructor 
    Matrix(){
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                mat[i][j]=0;
            }
        }
    }

    void inputMatrix(){
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                cin >> mat[i][j];
            }
        }
    }

    Matrix operator +(const Matrix& m){
        Matrix result;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator -(const Matrix& m){
        Matrix result;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                result.mat[i][j] = this->mat[i][j] - m.mat[i][j];
            }
        }
        return result;
    }

    void display() const {
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A, B, C;

    cout << "Matrix A:" << endl;
    A.inputMatrix();
    cout << "Matrix B:" << endl;
    B.inputMatrix();

    C = A + B;
    cout << "Matrix Addition (A+B) : " << endl;
    C.display();

    C=A-B;
    cout << "Matrix Subtaction (A-B) : " << endl;
    C.display();

    return 0;
}
*/

//            Question 7 : 
/*
#include <iostream>
#include <cstring>
using namespace std;


class String{

    private:
    static const int MAX_SIZE = 100; 
    char str[MAX_SIZE];

    public:
    String(const char* s = ""){
        strcpy(str, s);
    }


    String operator +(const String& s1) const{
        String result;
        strcpy(result.str, str);     // make a copy without changing the original string   
        strcat(result.str, s1.str); // concatenate
        return result;
    }

    bool operator ==(const String& s1) const{
        return strcmp(str, s1.str) == 0; // compare
    }

    void display() const {
        cout << str << endl;
    }

};

int main() {
    String str1(" Hello , ");
    String str2(" Hello , ");
    String str3(" World !");
    String str4 = str1 + str3;

    str4.display();
    
    if (str1 == str2) {  
        cout << "str1 and str2 are equal." << endl;
    } 
    else {
        cout << "str1 and str2 are not equal." << endl;
    }

    if (str1 == str3) {
        cout << "str1 and str3 are equal." << endl;
    } 
    else {
        cout << "str1 and str3 are not equal." << endl;
    }

    return 0;
}
*/

//            Question 8 : 
/*
#include <iostream>
using namespace std;

class Counter {
    private:
    int count;

    public:
    Counter(int c){
        count = c;
    }

    Counter operator ++(){
        ++count;
        return *this;
    }

    Counter operator ++(int){
        Counter temp = *this; // 11
        count++;
        return temp;
    }

    int getCount(){
        return count;
    }
};

int main() {
    Counter c1(10);
    ++c1; 
    c1++; 
    cout << c1.getCount() << endl; // 12
    return 0;
}
*/

// Question 9 : 
/*
#include <iostream>
using namespace std;

class MathOperations {
public:
    int calculate(int a , int b){
        return a+b;
    }

    double calculate(double a , double b){
        return a+b;
    }

    double calculate(int a , double b){
        return a*b;
    }

};

int main() {
    MathOperations m1;
    cout << m1.calculate(2,4) << endl;
    cout << m1.calculate(2.13,2.20) << endl;
    cout << m1.calculate(2,2.12) << endl;
    return 0;
}
*/

// Question 10 :
/*
#include <iostream>
using namespace std;

class MyArray {
private:
    int arr[5];  

public:
    MyArray() {
        for (int i = 0; i < 5; i++)
            arr[i] = i * 10;  
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Index out of bounds!" << endl;
            exit(1); 
        }
        return arr[index]; 
    }

    int operator[](int index) const {
        if (index < 0 || index >= 5) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index]; 
    }
};

int main() {
    MyArray obj;

    cout << "Element at index 2: " << obj[2] << endl; 

    obj[3] = 100;
    cout << "Modified element at index 3: " << obj[3] << endl; 

    return 0;
}
*/