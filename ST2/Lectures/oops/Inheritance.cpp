// Inheritance  - promotes reusability
// Rather than owning its better to borrow

// inheritance : it is one of the fundamental feature of object oriented programming
// where one class can use/inheritance the properties/members of other class.

/*
#include <iostream>
using namespace std;

class Cat { // parent/father/Top/Base

    public:
    string name;
    bool fur;
    bool jump;
    bool tail;

    Cat(){
        name = "Cat";
        fur = true;
        jump = true;
        tail = true;
    }
    
};

class Tiger:public Cat { // Child/Derived
    public:
    Tiger(){
        name = "Tiger";
    }
};

int main() {
    
    Tiger t;
    cout << t.fur << endl;
    cout << t.name << endl;
    return 0;
}
    */

   /* 
#include <iostream>
using namespace std;

class Parent {
    public:
        int a;
    protected:
        int b;
    private:
        int c;o-[  ]
};

class Child : public Parent {
    // a remains public
    // b remains protected
    // c is not accessible
    void printDetails(){
        cout << b << endl;
    }
};

class Student{
    void show(){
        // cout << b << endl; this is not the child class so it will be not accessible 
        // b is only accessible in the child class not in any other class
    }
};

int main() {
    Child c;
    // cout << c.a << endl;
    return 0;
}
*/

//1.)Single inheritance-one base/paret class->one derived/child class
/*
#include <iostream>
using namespace std;

class Animal {
    public:
    void eat(){
        cout << "This animal eats food" << endl;
    }
};

class Dog : public Animal {
    public:
    void bark(){
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.eat(); // inherited from Animal
    d.bark();
    return 0;
}
*/

// multiple inheritance - one child class inherits from multiple base classes.

// class A
// class B
// class C
// class D : class A , class B , class C

/*
#include <iostream>
using namespace std;

class Parent1 {
    public:
    void show1() {
        cout << "Base Class 1" << endl;
    }
};

class Parent2 {
    public:
    void show2(){
        cout << "Base class 2" << endl;
    }
};

class Child : public Parent1 , public Parent2 {
    public:
    void show3(){
        cout << "Derived Class" << endl;
    }
};

int main() {
    Child obj;
    obj.show1();
    obj.show2();
    obj.show3();
    return 0;
}
*/

// Multilevel inheritance : a class from a derived class ( i.e. grandparent ---> child)
// Example from notes  pdf


// Hierarchial inheritance - one base class -> multiple derived class
//         class A;
//         /      |          \
//     class B   class C   class D


#include <iostream>
using namespace std;

class Vehicle {
    public:
    string city = "Chandigarh";
    void start(){
        cout << "vehicle is running for " << city << "............." << endl;
    }
};

// Inheritance : IS-A Relationship 

class Car : public Vehicle{
    public:
    void start(){
        cout<<"car is running for"<<city<<"....."<<endl;
    }

};
class Student{};

int main() {
    Car c;
    //c.city;
    //c.start();
    Student student;
    Vehicle v;//self object
    //v->childclassobject/selfobject/null
    v=c;
    v.start();
}