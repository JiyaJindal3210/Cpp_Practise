//Encapsulation :

// encapsulation is the one of the fundamentals of oops where you make all the members of the class as private so that the other class cannot directly access those members
/*
#include <iostream>
using namespace std;

class Student {

    private:
    int studentRollNo;
    string studentName;
    string studentCity;


    public:
    Student(){
        cout << "Default constructor" << endl;
    }

    Student(int rollNumber , string name , string city){
        studentRollNo = rollNumber;
        studentName = name;
        studentCity = city;
    }

    // getter methods are just like other methods in term of functionality just different by name .
    // These are used to access the members of the class that's why it is important to keep these methods as public.
    // setter - are used to modify/set the members of the class

    // getter method:
    int getstudentRollNo(){
        return studentRollNo;
    }
    string getstudentName(){
        return studentName;
    }
    string getstudentCity(){
        return studentCity;
    }

    // setter method :
    void setstudentRollNo(int rollNumber){
        studentRollNo = rollNumber;
    }

    void setstudentName(string name){
        studentName = name;
    }

    void setstudentCity(string city){
        studentCity = city;
    }

};

// Note : as a developer whenever you are developing or creating any real - world application using (oop) , 
// then it is very important to create all kind of class as fully encapsulated 

// How to create fully encapsulated class ?
// 1. Make all members of the class as private . 
// 2. Take getter and setter methods to modify or access the member of the class . 
// 3. Keep getter and setter methods in the public block
// 4. Take any of the constructor either default or parametrized constructor


int main() {
    
    Student s1(21,"Rahul","Punjab");
    // s1.studentCity; // giving a error because members are private so not accessible 
    Student s2(23,"rishab","haryana");

    
    cout << s1.getstudentName() << endl;
    s1.setstudentName("Suresh");
    cout << s1.getstudentName() << endl;
    // cout << s1.getstudentCity() << endl;
    // cout << s2.getstudentName() << endl;

    

}
*/

// Create a fully encapsulated employee class with members :
// employeeID , employeeName , employeeDepartment , employeeSalary
// and create 2 objects of employee class where access objects members using getter methods and obtain object employee member using setter methods

/*
#include <iostream>
using namespace std;

class Employee {
    private:
    int employeeID;
    string employeeName;
    string employeeDepartment;
    double employeeSalary;

    public:
    Employee(int id , string  name , string department , double salary){
        employeeID = id;
        employeeName = name;
        employeeDepartment = department;
        employeeSalary = salary;
    }

    // getter
    int getEmployeeID(){
        return employeeID;
    }
    string getEmployeeName(){
        return employeeName;
    }
    string getEmployeeDepartment(){
        return employeeDepartment;
    }
    double getEmployeeSalary(){
        return employeeSalary;
    }

    // setter
    void setEmployeeID(int id){
        employeeID = id;
    }
    void setEmployeeName(string name){
        employeeName = name;
    }
    void setEmployeeDepartment(string department){
        employeeDepartment = department;
    }
    void setEmployeeSalary(double salary){
        employeeSalary = salary;
    }
};

int main() {
    
    Employee e1(1232,"Rohan","IT",32000.00);
    Employee e2(34235,"rahul","IT",24543.90);

    cout << e1.getEmployeeDepartment() << endl;
    cout << e1.getEmployeeName() << endl;
    cout << e1.getEmployeeID() << endl;
    cout << e1.getEmployeeSalary() << endl;

    cout << "-------------------------------------" << endl;

    cout << e2.getEmployeeDepartment() << endl;
    cout << e2.getEmployeeName() << endl;
    cout << e2.getEmployeeID() << endl;
    cout << e2.getEmployeeSalary() << endl;

    cout << "-------------------------------------" << endl;

    e2.setEmployeeSalary(213471.98);
    cout << "New Salary : " << e2.getEmployeeSalary() << endl;

    return 0;
}
*/

