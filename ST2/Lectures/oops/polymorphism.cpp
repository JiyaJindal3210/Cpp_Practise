// Polymorphism - one function or operator behaves differently in different situations
// types - 1. complile-time (static binding / early binding)
// it is resolved during complilaltion time
// to achieve Compile-time polymorphism you must know about overloading concept (Function/Constructor/Operator Overloading)

// Function Overloading
/*
#include <iostream>
using namespace std;

class Calculator {
    public:
        int add(int a , int b){
            return a+b;
        }
        double add(double a , double b){
            return a + b;
        }
};

int main() {
    Calculator c;
    cout << c.add(5,3) << endl; //8 // here compiler is checking that which function is applicable here at the compiler time
    cout << c.add(5.5,3.3) << endl;  // 8.8
}
*/

// Operator Overloading
/*
#include <iostream>
using namespace std;

class Complex {
    public:
    int real , imag;
    Complex(int r,int i) : real(r) , imag(i) {}

    Complex operator + (Complex const &obj){
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display(){
        cout << real << "+" << imag << "i" << endl;
    }

};

int main() {
    Complex c1(3,4) , c2(1,2);
    Complex c3 = c1 + c2;
    c3.display();
}
*/

// Constructor overlaoding
/*
#include <iostream>
using namespace std;

class Student{
    int id;
    string name;
    string city;

    public:
    Student(){
        cout << "Default " << endl;
    }
    Student(string name , string city){
        cout << "Parematrized 1 " << endl;
        this->id = 56;
        this->name = name;
        this->city = city;
    }
    Student(string name){
        cout << "Parematrized 2 " << endl;
        this->id =  76;
        this->name = name;
        this->city = "Noida";
    }
};

int main() {
    Student s1; // default
    Student s2("Rohan"); // parametrized 2
    Student s3("rahul","Punjab"); // parametrized 1
}
*/

// 2. run-time (Dynamic binding / Late Binding): 
// resolved during runtime using inheritance virtual functions
// method overriding(virtual functions)

/*
#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void sound(){
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound(){
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); // output : animal makes a sound
}
*/

/*
#include <iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void processPayment(){
        cout << "Processing your payment" << endl;
    }
};

class CreditCard : public PaymentMethod{
public:
    void processPayment(){
        cout << "Processing through credit card" << endl;
    }
};

class DebitCard : public PaymentMethod {
public:
    void processPayment(){
        cout << "Processing through debit card" << endl;
    }
};

class UPI : public PaymentMethod {
public:
    void processPayment(){
        cout << "Processing through UPI" << endl;
    }
};

class NetBanking : public PaymentMethod {
public:
    void processPayment(){
        cout << "Processing through Net banking" << endl;
    }
};

int main() {

    PaymentMethod *payment;

    payment = new CreditCard();
    payment->processPayment();

    payment = new DebitCard();
    payment->processPayment();
    
    payment = new UPI();
    payment->processPayment();

    payment = new NetBanking();
    payment->processPayment();
    
}
*/


