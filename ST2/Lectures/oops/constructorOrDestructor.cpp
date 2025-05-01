// Constructor/Destructor : their names are equal to class name.

// constructor : it is automatically called when object of a class is being created.
// destructor : it is automatically called when object of a class is being destroyed.

#include <iostream>
using namespace std;

class A{
    public:
    string name;
    int age;

    //default constructor - there will be one default constructor per class.
    A(){
        cout << "Inside Default constructor" << endl;
    }

    //paramerterized constructor
    A(string name){
        cout << "Inside paramerterized constructor with string parameter " << endl;
        this->name = name;
    }

    //paramerterized constructor
    A(int age){
        cout << "Inside paramerterized constructor with int parameter " << endl;
        this->age = age;
    }

    //Destructor - there will be one destructor per class
    ~A(){
        cout << "Inside Destructor " << endl;
    }

};

int main() {
    A a1; // Default Constructor
    A a2(45);// paramerterized constructor with int parameter
    A a3("Rakesh"); // paramerterized constructor with string parameter


}