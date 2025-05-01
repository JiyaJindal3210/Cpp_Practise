/*
#include <iostream>
using namespace std;

class A{
    public:
    //data member
    int value;

    //function member
    int getValue(){
        return value;
    }
};

int main() {
    
    //to access non static member of class A, what will you do? - need to create the object of the class A(can be accessed through objects)

    //without creating object
    //cout << value << endl;

    A a1; // created a1 object of class A
    cout << a1.value << endl;
    cout << a1.getValue() << endl;

    A a2;
    a2.value = 45;
    cout << a2.value << endl;
    cout << a2.getValue() << endl;

}
*/

/*
#include <iostream>
using namespace std;

class FlipkartOrder{

    public:
    //static data member
    static int orderCount;


    //static function member
    static int getOrderCount(){
        return orderCount;
    }
};

int main() {
    
    cout << FlipkartOrder::orderCount<< endl;
    cout << FlipkartOrder::getOrderCount() << endl;

}
*/

/*
#include <iostream>
using namespace std;

class A{
    public:
    static int value;
    int age;

    static int getValue(){
        //Note: static function can only access static data members (can be accessed by both classname and objects )
        return value;
    }
};

int A::value = 32; // default value is 0 


int main() {
    
    //to access static members of the class , you dont need to create the object -- you can access directly using className
    // syntax - ClassName::memberName;

    cout << A::value << endl;

    // A a1,a2,a3,a4,a5;
    // cout << a1.value << "------" << a1.age << endl;
    // cout << a2.value << "------" << a2.age << endl;
    // cout << a3.value << "------" << a3.age << endl;
    // cout << a4.value << "------" << a4.age << endl;
    // cout << a5.value << "------" << a5.age << endl;

    cout << A::getValue() << endl;


}
*/

/*
#include <iostream>
using namespace std;

class FlipkartOrder {
public:
    static int orderCount;  // Static member variable declaration

    FlipkartOrder() {
        orderCount++;  // Increment order count when an object is created
        cout << "Default Constructor called" << endl;
    }

    static int getOrderCount() { // Static member function
        return orderCount;
    }
};

// Define and initialize static member outside the class
int FlipkartOrder::orderCount = 0; 

int main() {
    FlipkartOrder o1, o2, o3, o4, o5; // Creating multiple objects
    cout << FlipkartOrder::orderCount << endl;  // Access static variable
    cout << FlipkartOrder::getOrderCount() << endl;  // Access static function
}
*/

/*
#include <iostream>
using namespace std;

class Company{

public:
    static int employeeCount;

    Company(){
        employeeCount++;
    }
    static int showTotalEmployees(){
        return employeeCount;
    }
};

int Company::employeeCount = 0;

int main() {
    Company e1,e2,e3,e4,e5;
    cout << Company::employeeCount << endl;
}
*/

/*
#include <iostream>
using namespace std;

class Bank {

    static float interestRate; 

public:
    
    static void setInterestRate(float rate) {
        interestRate = rate;
    }

    
    static float getInterestRate() {
        return interestRate;
    }
};


float Bank::interestRate = 0.0;

int main() {
    
    Bank::setInterestRate(5.5); 
    cout << "Current Interest Rate: " << Bank::getInterestRate() << "%" << endl;

    Bank::setInterestRate(6.8); 
    cout << "Updated Interest Rate: " << Bank::getInterestRate() << "%" << endl;

}
*/

/*
#include <iostream>
using namespace std;

class Test{
    public:
    static int count;
    Test(){
        count++;
    }
};

int Test::count;

void demo(){
    static Test t1;
}

int main() {
    demo();
    demo();
    demo();
    demo();
    demo();
    demo();
    cout << Test::count << endl;
}
*/

/*
#include <iostream>
using namespace std;

class Student{
    public:
    static int studentCount;
    static int courseEnrolledCount;
    string name;
    int rollNo;
    string city;

    
    Student(string n,int r, string c){
        studentCount++;
        name = n;
        rollNo = r;
        city = c;
    }

    string enrollIntoCourse(){
        courseEnrolledCount++;
        return "Enrolled Into Course Successfully";
    }

    
};

int Student::studentCount;
int Student::courseEnrolledCount;

int main() {
    //problem statement : create a class studnet with foll members: 
    // static int studentCount,
    //  static int courseEnrolledCount ,
    //  string name , 
    // int rollNo , 
    // int city

    // string enrollIntoCourse(){
    //      return "Enrolled Into Course Successfully"
    // }

    Student s1 = Student("Student1",45,"noida");
    Student s2 = Student("Student2",46,"noida");
    Student s3 = Student("Student3",47,"noida");
    Student s4 = Student("Student4",48,"noida");
    Student s5 = Student("Student5",49,"noida");

    cout << "Registered Student Count : " << Student::studentCount << endl;
    cout << "Registered Enrolled in course Count: "<< Student::courseEnrolledCount<<endl;

    s1.enrollIntoCourse();
    s2.enrollIntoCourse();
    s3.enrollIntoCourse();
    cout << "Registered Enrolled in course Count: "<< Student::courseEnrolledCount<<endl;


}
*/

