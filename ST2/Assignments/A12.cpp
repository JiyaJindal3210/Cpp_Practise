// Question 1 :
/*
#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    double marks;

    public:
    Student(string n,int r, double m){
        name = n;
        rollNumber = r;
        marks = m;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll number : " << rollNumber << endl;
        cout << "Marks : " << marks << endl;
    } 
};

int main() {
    Student s1("Jiya",3210,9.34);
    s1.display();
}
*/

// Question 2 :
/*
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    int calculateArea(){
        return length*breadth;
    }
};

int main() {
    Rectangle r1(3,55);
    cout << r1.calculateArea() << endl;
}
*/

// Question 3 :
/*
#include <iostream>
using namespace std;

class BankAccount{
    private:
    string accountHolderName;
    int accountNumber;
    int balance;

    public:
    BankAccount(string n , int a , int b){
        accountHolderName = n;
        accountNumber = a;
        balance  = b;
    }

    int deposit(int money){
        balance += money;
        return balance;
    }

    int withdraw(int money){
        if(balance>money){
            balance -= money;
            return balance;
        }
        else{
            cout << "Not sufficient money in the account ." << endl;
        }
    }

    void display(){
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl; 
    }
};

int main() {
    BankAccount b1;

    b1.deposit(300000);
    b1.display();
    cout << endl;

    cout << "---------------------------------" << endl;
    cout << endl;

    b1.withdraw(200000);
    b1.display();
    cout << endl;
}
*/

// Question 4:
/*
#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int ID;
    double salary;

    public:
    Employee(string n , int i , double s){
        name  = n;
        ID = i;
        salary = s;
    }

    void displayEmployeeDetails(){
        cout << "----------------------------------" << endl;
        cout << "Name : " << name << endl;
        cout << "ID : " << ID << endl;
        cout << "Salary : " << salary << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    Employee e1;
    e1.displayEmployeeDetails();
}
*/

// Question 5 :
/*
#include <iostream>
using namespace std;

class Calculator{
    public:
    int num1 , num2;

    Calculator(int n , int m){
        num1 = n;
        num2 = m;
    }

    int addition(){
        return num1 + num2;
    }

    int subtraction(){
        return num1 - num2;
    }

    int multiplication(){
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void choice(int choice){
        cout << "Please select a operator to calculate : " << choice << endl;
    }
};

int main() {

    double a, b;
    char op;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    // Creating an object of Calculator
    Calculator calc(a, b);

    double result;

    // Performing the chosen operation
    switch (op) {
        case '+':
            result = calc.addition();
            break;
        case '-':
            result = calc.subtraction();
            break;
        case '*':
            result = calc.multiplication();
            break;
        case '/':
            result = calc.divide();
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    // Displaying the result
    cout << "Result: " << result << endl;

    return 0;
    
}
*/

// Question 6 :
/*
#include <iostream>
using namespace std;

class Book{
    public:
    string Title;
    string author;
    int price;

    Book(string t , string a , int p){
        Title = t;
        author = a;
        price = p;
    }

    void displayDetails(){
        cout << "----------------------------------" << endl;
        cout << "Title : " << Title << endl;
        cout << "Author : " << author << endl;
        cout << "Price : " << price << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    Book b1("Friends","Rahul",450);
    b1.displayDetails();
    return 0;
}
*/

// Question 7 : 
/*
#include <iostream>
using namespace std;

class DistanceConverter{
    public:
    double meters;

    DistanceConverter(double m){
        meters = m;
    }

    double kilometers(){
        return meters/1000;
    }

    double centimeters(){
        return meters*100;
    }
};

int main() {
    DistanceConverter d1(2000.25);
    cout << d1.kilometers() << endl;
    cout << d1.centimeters() << endl;
    return 0;
}
*/

// Question 8 :
/*
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;

    Circle(int r){
        radius = r;
    }

    double Area(){
        return 3.14*radius*radius;
    }

    double Circumference(){
        return 2*3.14*radius;
    }

};

int main() {

    Circle c1(3);
    cout << "Area : " << c1.Area() << endl;
    cout << "Circumference : " << c1.Circumference() << endl;

    return 0;
}
*/

// Question 9 :
/*
#include <iostream>
using namespace std;

class Movie{
    public:
    string title;
    int duration;
    int ticketPrice;

    Movie(string t , int d , int p){
        title = t;
        duration = d;
        ticketPrice = p;
    }

    int count=0;
    int bookTicket(){
        count++;
        return count;
    }

    int TotalRevenue(){
        return ticketPrice*count;
    }
};

int main() {
    Movie m1("Stree2",120,250);
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();
    m1.bookTicket();

    cout << "Total Revenue : " << m1.TotalRevenue() << endl;
    return 0;
}
*/

// Question 10 :
/*
#include <iostream>
using namespace std;

class Car{
    public:
    string carName;
    int carNumber;
    int rentPerDay;

    Car(string n , int cn , int rpd){
        carName = n;
        carNumber = cn;
        rentPerDay = rpd;
    }

    int rentAmount(int rentPeriod){
        return rentPerDay*rentPeriod;
    }
};

int main() {
    Car c1("Creta",21376,3500);
    cout << "Car rent : " << c1.rentAmount(20) << endl;
    return 0;
}
*/
