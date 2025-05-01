// Question 1 :
/*
#include <iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    double balance;

    public:

    BankAccount(int an , double b){
        accountNumber = an;
        balance = b;
    }

    double deposit(double amount){
        balance += amount;
        return balance;
    }

    double withdraw(double amount) {
        if(balance>amount){
            balance -= amount;
        }
        else {
            cout << "Not sufficient amount in your account" << endl;
        }
        return balance;
    }

    void displayBalance(){
        cout << "Your current balance is : " << balance << endl;
    }
};

int main() {
    BankAccount b1(126754,40000);
    cout << b1.deposit(10000) << endl;
    cout << b1.withdraw(20000) << endl;
    b1.displayBalance();
    return 0;
}
*/

// Question 2 :
/*
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
    double x, y;

    public:
    Point(double x = 0, double y = 0){
        this->x = x;
        this->y = y;
    }

    friend double calculateDistance(const Point& p1, const Point& p2);

};

double calculateDistance(const Point& p1, const Point& p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1(2.0, 3.0);
    Point p2(5.0, 7.0);

    cout << "Distance between points: " << calculateDistance(p1, p2) << endl;
    
    return 0;
}
*/

// Question 3 :
/*
#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        double salary;

    public:
        Employee(string name , double salary){
            this->name = name;
            this->salary = salary;
        }

        friend class HR;

};

class HR {
    public:
        void showSalary(Employee e1){
            cout << "Name : " << e1.name << endl;
            cout << "Salary : " << e1.salary << endl;
        }
};

int main() {

    Employee e1("Rakesh",40000);
    HR h1;
    h1.showSalary(e1);

    
    return 0;
}
*/

// Question 4 :
/*
#include <iostream>
using namespace std;

class Box {
    private:
        int length;
        int width;
        int height;

    public:

    Box(int l,int w, int h){
        length = l;
        width = w;
        height = h;
    }

    int volume() const {
        return length * width * height;
    }

    friend void isBigger(Box b1, Box b2);
};

void isBigger(Box b1, Box b2){
    if(b1.volume()>b2.volume()){
        cout << "Volume of first is bigger i.e. : " << b1.volume() << endl;
    }
    else if(b1.volume()<b2.volume()){
        cout << "Volume of first is bigger i.e. : " << b2.volume() << endl;
    }
    else{
        cout << "Both are equal" << endl;
    }
}

int main() {

    Box b1(2,3,4);
    Box b2(3,3,2);
    isBigger(b1,b2);
    return 0;
}
*/

// Question 5 :
/*
#include <iostream>
using namespace std;

class Person {
    protected:
        string name ;
        int age;

    public:
        Person(string n , int a){
            name = n;
            age = a;
        }
};

class Student : public Person {
private:
    int rollNo;
    char grade;

public:
    Student(string n, int a, int r, char g) : Person(n, a) {
        rollNo = r;
        grade = g;
    }

    void display(){
        cout << endl;
        cout << "Student Details : " << endl;
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll no : " << rollNo << endl;
        cout << "Grade : " << grade << endl;
        cout << endl;
    }

};


int main() {
    Student s1("Rohan",16,25,'A');
    s1.display();
    return 0;
}
/*

// Question 6 :
/*
#include <iostream>
using namespace std;

class Complex {
    private:
    int real ,img;

    public:
    Complex(){
        real = 0;
        img = 0;
    }

    Complex(int r , int i){
        real = r;
        img = i;
    }

    void print(){
        cout << real << " + " << img << " i " << endl;
    }

    friend Complex operator +(Complex& c1 , Complex& c2);
    
};

Complex operator +(Complex& c1 , Complex& c2){
    Complex temp;
    temp.real = c1.real+c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main() {
    Complex c1(5,7);
    Complex c2(2,3);
    Complex c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}
*/

// Question 7 :
/*
#include <iostream>
using namespace std;

int main() {
    
    return 0;
}
*/

// Question 8 :
/*
#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        int price;
    
    public:
        Car(string b , int p){
            brand = b;
            price = p;
        }
    
    friend class Showroom;
};

class Showroom {
    public:
        void show(const Car& c1){
            cout << "Brand : " << c1.brand << endl;
            cout << "Price : " << c1.price << endl;
        }
};

int main() {
    Car c1("Toyota",2500000);
    Showroom s1;
    s1.show(c1);
    return 0;
}
*/

// Question 9 :
/*
#include <iostream>
using namespace std;

class ATM {
    private:
        int pin;
        double balance;
    
    public:
        ATM(){
            balance =0.0;
        }
        void setPin(int p) {
            pin = p;
            cout << "PIN set successfully." << endl;
        }
        void withdraw(int amount , int enteredPin){
            if(enteredPin == pin){
                if(balance > amount){
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: " << balance << endl;
                }
                else {
                    cout << "Insufficient funds or invalid amount!" << endl;
                }
            }
            else{
                cout << "Incorrect PIN! Access denied.Try again" << endl;
            }
        }
        void displayBalance(int enteredPin) {
            if (enteredPin == pin) {
                cout << "Current Balance: " << balance << endl;
            } else {
                cout << "Incorrect PIN! Access denied." << endl;
            }
        }
        void deposit(int amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful New balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        
};

int main() {
    ATM myATM;
    myATM.setPin(1234);

    myATM.deposit(5000);  
    myATM.displayBalance(1234);  

    myATM.withdraw(2000, 1234);  
    myATM.displayBalance(1234);  

    myATM.withdraw(500, 1111);  
    myATM.displayBalance(1111);  

    return 0;
}
*/

// Question 10 :
/*
#include <iostream>
using namespace std;

class Number {
    private:
        double num1 , num2;

    public:
        Number(double num1 , double num2){
            this->num1 = num1;
            this->num2 = num2;
        }

        friend void calculate(Number c1);
        
};

void calculate(Number c1){
    cout << "addition = " << c1.num1 + c1.num2 << endl;
    cout << "subtract =" << c1.num1 - c1.num2 << endl;
    cout << "multiply =" << c1.num1*c1.num2 << endl;
    cout << "division =" << c1.num1/c1.num2 << endl;
}

int main() {
    Number c1(15,3);
    calculate(c1);
    return 0;
}
*/