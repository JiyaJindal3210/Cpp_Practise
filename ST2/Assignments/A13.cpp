// Question 1 : 
/*
#include <iostream>
using namespace std;

class Counter{
    private:
    static int objectCount;
    int objectID;

    public:
    Counter(){
        objectCount++;
        objectID = objectCount;
    }

    void display(){
        cout << "Object ID: " << objectID << ", Total Objects: " << objectCount << endl;
    }
};

int Counter::objectCount = 0;

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
*/

// Question 2 :
/*
#include <iostream>
using namespace std;

class BankAccount{
    private:
    double balance;
    static double interestRate;

    public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(int money){
        if (money > 0) {
            balance += money;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }

    }

    void showBalance() const {
        cout << "Account Balance: " << balance << ", Interest Rate: " << interestRate << "%" << endl;
    }

    static void setInterestRate(double rate) {
        interestRate = rate;
    }

};

double BankAccount::interestRate = 0.0;

int main() {
    BankAccount acc1(1000);
    BankAccount acc2(2000);

    acc1.deposit(500);
    acc2.deposit(1000);

    BankAccount::setInterestRate(5.0);

    acc1.showBalance();
    acc2.showBalance();
    return 0;
}
*/

// Question 3 : 
/*
#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
    static int passingMarks;

    Student(int m){
        marks = m;
    }

    void checkPass(){
        if(marks>passingMarks){
            cout << "Marks: " << marks << ", Status: Passed" << endl;
        }
        else{
            cout << "Marks: " << marks << ", Status: Failed" << endl;
        }
    }

    static void setPassingMarks(int MARKS){
        passingMarks = MARKS;
    }
};

int Student::passingMarks = 0;

int main() {

    Student s1(85);
    Student s2(40);
    Student::setPassingMarks(50);
    s1.checkPass();
    s2.checkPass();

    return 0;
}
*/

