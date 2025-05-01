/*
#include <iostream>
using namespace std;

// constant members : data/function/object member 
// constant : if something is declared as constant , meaning that it is not going to change.

//constant data member : 

class A{
    public:
    const int value = 45;
    string name;

    A(int v,string n):value(v), name(n){}
};

// constant function member : it cant chnage or modify any data member of the class

int main() {
    
    // A a;
    // cout << a.value << endl;
    // a.value = 56; // can't change 

    // you cant change the constant data member, but still we have one way
    // to change- using constructor
    
    A a(67, "Student1");
    cout << a.name << " " << a.value << endl;
    
}
*/

/*
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length=12;
    int width=10;


    int getArea()const{
        int length=13;
        return length*width;
    }
};

int main() {
    Rectangle r1;
    cout << r1.getArea() << endl;
}
*/

