/*
#include <iostream>
#include <vector>
using namespace std;

//declaration of struct:
typedef struct Student{
    int rollNumber;
    string name;
    float marks;
};
// struct Student{
//     int rollNumber;
//     string name;
//     float marks;
// };

int main() {
    //struct : it stands for 'structure' - It is used to store the different types of data in a single variable

    //It is like a blueprint/structure which is used to create multiple object using same blueprint.




    // syntax :
    // struct structName{
    //     data_type member1,
    //     data_type member2,
    //     data_type member3,
    //     data_type member4,
    // }

    // Note : Naming for struct must follow PascalCaseNamingConvention

    //Student struct object creation:
    //Syntax 1 :
    // struct Student studentStructVariableName;
    // 
    // Example:
    // struct Student stu1;
    // Student studentStructVariableName
    // 
    // Eg 2:
    // Student stu1;
    // st studentStructVariableName
    // 
    // eg 3:
    // st stu1;
    
    // struct Student stu1;
    // Student stu2;
    // st stu3;


    // how to add values for member : using dot(.) notation
    //Syntax : structVariableName.fieldName = value;


    //adding the value to the fields
    // stu1.rollNumber = 56;
    // stu1.name = "Champak";
    // stu1.marks = 456.56;

    // or
    // Student stu1 = {45, "Pravin", 67.67};

    // or
    // Student stu1 = Student({45, "Pravin", 67.67});

    Student stu1;

    stu1.rollNumber = 56;
    stu1.name = "Champak";
    stu1.marks = 456.56;

    // cout << endl;
    // cout << stu1.name << endl;
    // cout << stu1.rollNumber << endl;
    // cout << stu1.marks << endl;

    // cout << endl;

    Student stu2;

    stu2.rollNumber = 21;
    stu2.name = "Kunal";
    stu2.marks = 345.98;

    // cout << stu2.name << endl;
    // cout << stu2.rollNumber << endl;
    // cout << stu2.marks << endl;
    //how to access the value of struct: using dot(.) notation

    // cout << endl;


    // Student students[5];

    // students[0] = stu1;
    // students[1] = stu2;

    vector<Student> students;

    students.push_back(stu1);
    students.push_back(stu2);

    cout << students[0].name << endl;
    cout << students[1].name << endl;

    return 0;
}   

*/

/*
#include <iostream>
#include <vector>
using namespace std;


    // Student: Create an Employee struct with fields: employeeName, employeeSalary, employeeDepartment, employeeAddress, and perform the following operations:

    // 1. Add 10 different employee object to vector<Employee>, its better if you can take input for employee from the user.
    // 2. Find Print the Name of employees who belong to Delhi
    // 3. Find out the total salary given to the IT deparment.


struct Employee{
    string employeeName;
    double employeeSalary;
    string employeeDepartment;
    string employeeAddress;
};


vector<Employee> employeeList;

string addEmployee(){
    Employee employee;
    cin.ignore();
    cout <<"Enter Name: ";
    getline(cin, employee.employeeName);

    cout <<"Enter Salary: ";
    cin>>employee.employeeSalary;

    cout <<"Enter Departement: ";
    cin>>employee.employeeDepartment;

    cin.ignore();
    cout <<"Enter Address: ";
    getline(cin, employee.employeeAddress);

    employeeList.push_back(employee);
    return "Employee has added successfully";
}

void getAllEmployees(){
    for(Employee emp: employeeList){
        cout <<"-------------------------------------"<<endl;
        cout <<"Employee Name: "<<emp.employeeName<<endl;
        cout <<"Employee Salary: "<<emp.employeeSalary<<endl;
        cout <<"Employee Department: "<<emp.employeeDepartment<<endl;
        cout <<"Employee Address: "<<emp.employeeAddress<<endl;
        cout <<"-------------------------------------"<<endl;
    }
}

void menu(){
    cout <<"1. Add Employee"<<endl;
    cout <<"2. Get All Employees"<<endl;
    cout <<"3. Exit"<<endl;
    cout <<"Enter Your Choice: ";
}

int main(){

    bool flag = true;

    while(flag){
        menu();
        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2: 
            getAllEmployees();
            break;
        case 3:
            flag = false;
            break;
        default:
            cout <<"Invalid Choice, Please Enter Again"<<endl;
            break;
        }
    }

}
*/

#include <iostream>
using namespace std;

union Data{
    int intValue;
    float floatValue;
    char charValue;

};

int main() {

    //union : it is similar to struct only but it gets space for any of its member in the memory

    

    return 0;
}
