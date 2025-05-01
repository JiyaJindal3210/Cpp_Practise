// Overloading : It is related to number of parameters or type of parameter.
// It is feature in c++ that allows multiple functions , constructor , and operators with same name and different number of parameters and type of parameters.

// 1. Function Overloading
// 2. Constructor overloading
// 3. Operator overloading

// Note : Your compiler decides which function , constructor and operator calles dynamically according to number of parameters or type of parameters.

// 1. Function Overloading :
// Important :  Your function names are same but they are having different parameters.

/*
#include <iostream>
using namespace std;

class FunctionOverloadingExample{

    public:
    void welcome(string name){
        cout << "Name : " << name << endl;
    };
    void welcome(string name,int age){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    };
    void welcome(int age){
        cout << "Age : " << age << endl;
    };
    void welcome(float salary ){
        cout << "Salary : " << salary << endl;
    };
    

};

int main(){

    FunctionOverloadingExample a;
    a.welcome("rakesh");
    a.welcome(45);
    
}
*/

// 2. Constructor Overloading

/*
#include <iostream>
using namespace std;

class COL{
    public:
    // Default Constructor
    COL(){
        cout << endl;
        cout << "Inside Default Constructor" << endl;
        cout << endl;
    }

    //Parameterised constructor
    COL(string name , int id , string city){
        
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "City : " << city << endl;
        cout << endl;
    }

    COL(string name , string city){
        
        cout << "Name : " << name << endl;
        cout << "City : " << city << endl;
        cout << endl;
    }

    COL(int id){
        
        cout << "ID : " << id << endl;
        cout << endl;
    }

    COL(string name , string state , string city){
        
        cout << "Name : " << name << endl;
        cout << "State : " << state << endl;
        cout << "City : " << city << endl;
        cout << endl;
        
    }
};

int main() {
    
    COL c1;
    COL c2(45);
    COL c3("Rakesh","UP","Noida");

}
*/

/*
#include <iostream>
using namespace std;

class Student{
    public:
    void data(string name , int age , string grade){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Grade : " << grade << endl;
    }
    void data(string name , int age){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    void data(int age , string grade){
        cout << "Age : " << age << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main() {
    Student s1;
    s1.data(45,"Pass");
    s1.data("Rakesh",45);
}
*/

// 3. Operator overloading : 

/*
#include <iostream>
using namespace std;

class Box{
    public:
    int value;

    Box(int value){
        this->value = value;
    }
    // redifining the task of + operator

    // Box operator +(Box &box){
    //     return Box(value + box.value);
    // }

    // Box operator *(Box &box){
    //     return Box(value * box.value);
    // }

    bool operator ==(Box &box){
        return value == box.value;
    }


};

int main() {
    
    Box b1(45) , b2(45);

    // cout << (45+45) << endl; //90

    // Box box = b1 + b2;
    // cout << box.value << endl;

    // Box box1 = b1*b2;
    // cout << box1.value << endl;

    // int result = b1.value * b2.value;
    // cout << result << endl;

    if(b1 == b2){
        cout << "Equal" << endl;
    }



}
*/

/*
#include <iostream>
using namespace std;

class Counter{
    public:
    int count;

    Counter(int c){
        count = c;
    }

    // pre-increment
    Counter operator ++(){
        ++count;
        return *this;
    }

    //post increment
    Counter operator ++(int){
        Counter temp = *this; // 11
        count++;
        return temp;
    }

};

int main() {
    Counter c1(10);
    ++c1; // 11
    c1++;
    cout << c1.count << endl; //12
}
*/

#include <iostream>
using namespace std;

class Complex{
    private:
    int real , imag;

    public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int r , int i){
        real = r;
        imag = i;
    }
    void print(){
        cout << real << " + " << imag << " i " << endl;
    }

    // for operator overloading operator keyword is must 
    // before the operator keyword we need to type the data type 
    // like below we have used name of the class because the value we are returning complex object
    // it can be anything user defined datatype or class or void or int 
    // then after operator keyword you have to write which operator you want to overload
    // in the parenthesis you need to write the object of the same class


    Complex operator +(Complex &c){
        Complex temp; // this is created just to hold or write the values 
        temp.real = real + c.real; // here real value is the real part of the c1 object 
        // and c.real is the real part of the value of c2 
        // and we used c instead of c2 because in the bracket we have given c as c2 
        temp.imag = imag + c.imag;
        // similarly imag is the imag value of c1 and c.imag is the imag value of c2
        return temp;
        // temp will return an object which is somewhat similar to c1 and c2 like it will containt the real and imag values in bracket (_,_)

    }
};

int main() {
    Complex c1(4,5);
    Complex c2(3,4);
    Complex c3;
    c3 = c1 + c2; // c1.add(c2)
    // value of c2 will be added in c1 
    c3.print(); // 7 + 9 i
}