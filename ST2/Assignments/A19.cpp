// Question 1 : 
/*
#include <iostream>
using namespace std;

class Device {
    public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class Light : public Device {
    public:
    void turnOn() override{
        cout << "Light is now ON." << endl;
    }
    void turnOff() override{
        cout << "Light is now OFF." << endl;
    }
};

class Fan : public Device {
    public:
    void turnOn() override{
        cout << "Fan is now rotating." << endl;
    }
    void turnOff() override{
        cout << "Fan is now non-rotating." << endl;
    }
};

class AC : public Device {
    public:
    void turnOn() override{
        cout << "AC is now cooling." << endl;
    }
    void turnOff() override{
        cout << "AC is now not cooling." << endl;
    }
};

int main() {
   Device* d1 = new Light();
   Device* d2 = new Fan();
   Device* d3 = new AC();
   d1->turnOn();
   d2->turnOn();
   d3->turnOn();
}
*/

// Question 2 :
/*
#include <iostream>
using namespace std;

class PaymentMethod {
    public:
    virtual void processPayment(int) = 0;
};

class CreditCard : public PaymentMethod {
    public:
    void processPayment(int amount) override {
        cout << "Processing Credit Card payment of $" << amount << "." << endl;
    }
};

class PayPal : public PaymentMethod {
    public:
    void processPayment(int amount) override {
        cout << "Processing PayPal payment of $" << amount << "." << endl;
    }
};

class UPI : public PaymentMethod {
    public:
    void processPayment(int amount) override {
        cout << "Processing UPI payment of $" << amount << "." << endl;
    }
};


int main(){
    PaymentMethod* p1 = new CreditCard();
    p1->processPayment(500);
}
*/

// Question 3 :

/*
#include <iostream>
using namespace std;

class Employee {
    public:
    virtual void calculateSalary(int salary , int unused) = 0;
};

class FullTimeEmployee : public Employee {
    public:
    void calculateSalary(int salary , int unused) override{
        cout << "Full-Time Employee Salary: $" << salary << endl;
    }
};

class PartTimeEmployee : public Employee {
    public:
    void calculateSalary(int HourSalary , int hours) override{
        cout << "Part-Time Employee Salary: $" << (HourSalary*hours) << endl;
    }
};

class Freelancer : public Employee {
    public:
    void calculateSalary(int projects , int projectSalary)override{
        cout << "Freelancer Payment: $" << projects*projectSalary << endl;
    }
};

int main() {
    Employee* e1 = new FullTimeEmployee();
    Employee* e2 = new PartTimeEmployee();
    Employee* e3 = new Freelancer();

    e1->calculateSalary(50000,0);
    e2->calculateSalary(40,20);
    e3->calculateSalary(3,2000);

}
*/

// Question 4 :

/*
#include <iostream>
using namespace std;

class Course {
    public:
    virtual void showCourseDetails() = 0;
};

class VideoCourse : public Course {
    public:
    
    string title;
    int duration ;

    VideoCourse(string title , int duration){
        this->title = title;
        this->duration = duration;
    }

    void showCourseDetails()override{
        cout << "Video Course: " << title << ", Duration: " << duration << " hours." << endl;
    }
};

class LiveClass : public Course {
    public:
    string title, time ;
    LiveClass(string title , string time){
        this->title = title;
        this->time = time;
    }
    void showCourseDetails()override{
        cout << "Live Class: " << title << ", Timing: " << time << endl;
    }
};

class QuizCourse : public Course {
    public:
    string title;
    int questions;
    QuizCourse(string title , int ques){
        this->title = title;
        questions = ques;
    }

    void showCourseDetails()override{
        cout << "Quiz Course: " << title << ", Total Questions: " << questions << endl;
    }
};

int main() {
    Course* c1 = new VideoCourse("C++ Basics",3);
    Course* c2 = new LiveClass("DSA","10AM - 12PM");
    Course* c3 = new QuizCourse("C++",10);

    c1->showCourseDetails();
    c2->showCourseDetails();
    c3->showCourseDetails();
}
*/

// Question 5 :

/*
#include <iostream>
using namespace std;

class Vehicle {
    public:
    virtual void rentVehicle(int hours) = 0;
};

class Car : public Vehicle {
    public:
    void rentVehicle(int hours)override{
        cout << "Car rented for " << hours << "hours. Total cost: $" << hours*50 << endl;
    }
};

class Bike : public Vehicle {
    public:
    void rentVehicle(int hours)override{
        cout << "Bike rented for " << hours << "hours. Total cost: $" << hours*30 << endl;
    }
};

class Truck : public Vehicle {
    public:
    void rentVehicle(int hours)override{
        cout << "Truck rented for " << hours << "hours. Total cost: $" << hours*100 << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    Vehicle* v3 = new Truck();

    v1->rentVehicle(5);
    v2->rentVehicle(3);
    v3->rentVehicle(7);

}
*/

// Question 6 :

/*
#include <iostream>
using namespace std;

class Seat {
    public:
    virtual void calculateFare(double baseFare) = 0;
};

class EconomyClass : public Seat {
    public:
    void calculateFare(double baseFare)override{
        cout << "Economy Class Fare: $" << baseFare << endl;
    }
};

class BusinessClass : public Seat {
    public:
    void calculateFare(double baseFare)override{
        cout << "Business Class Fare: $" << baseFare << endl;
    }
};

class FirstClass : public Seat {
    public:
    void calculateFare(double baseFare)override{
        cout << "First Class Fare: $" << baseFare << endl;
    }
};

int main() {
    Seat* s1 = new EconomyClass();
    Seat* s2 = new BusinessClass();
    Seat* s3 = new FirstClass();

    s1->calculateFare(500);
    s2->calculateFare(700);
    s3->calculateFare(900);
}
*/

// Question 7 :

/*
#include <iostream>
using namespace std;

class ParkingSpot {
    public:
    virtual void calculateFee(int hours) = 0;
};

class CarParking : public ParkingSpot {
    public:
    void calculateFee(int hours)override{
        cout << "Car Parking Fee for " << hours << "hours: $" << hours*10 << endl;
    }
};

class BikeParking : public ParkingSpot {
    public:
    void calculateFee(int hours)override{
        cout << "Bike Parking Fee for " << hours << "hours: $" << hours*10 << endl;
    }
};

class TruckParking : public ParkingSpot {
    public:
    void calculateFee(int hours)override{
        cout << "Truck Parking Fee for " << hours << "hours: $" << hours*10 << endl;
    }
};

int main() {
    ParkingSpot* p1 = new CarParking();
    ParkingSpot* p2 = new BikeParking();
    ParkingSpot* p3 = new TruckParking();

    p1->calculateFee(3);
    p2->calculateFee(5);
    p3->calculateFee(7);

}
*/

// Question 8 :

/*
#include <iostream>
using namespace std;

class Loan {
    public:
    virtual void calculateRepayment(double principal, double tenure) = 0;
};

class HomeLoan : public Loan {
    public:
    void calculateRepayment(double principal, double tenure)override {
        double rate = 5;
        double total = principal + (principal * rate * tenure) / 100;
        cout << "Home Loan Repayment: $" << total << endl;
    }
};

class CarLoan : public Loan {
    public:
    void calculateRepayment(double principal, double tenure)override {
        double rate = 7;
        double total = principal + (principal * rate * tenure) / 100;
        cout << "Car Loan Repayment: $" << total << endl;
    }
};

class PersonalLoan : public Loan {
    public:
    void calculateRepayment(double principal, double tenure)override {
        double rate = 10;
        double total = principal + (principal * rate * tenure) / 100;
        cout << "Personal Loan Repayment: $" << total << endl;
    }
};


int main() {
    Loan* l1 = new HomeLoan();
    Loan* l2 = new CarLoan();
    Loan* l3 = new PersonalLoan();

    l1->calculateRepayment(100000,5);
    l2->calculateRepayment(100000, 5); 
    l3->calculateRepayment(100000, 5);
}
*/

// Question 9 : 

/*
#include <iostream>
using namespace std;

class Evaluation {
    public:
    virtual void calculateGrade(int score) = 0;
};


string getGrade(int score) {
    if (score >= 90) return "A+";
    else if (score >= 80) return "A";
    else if (score >= 70) return "B";
    else if (score >= 60) return "C";
    else if (score >= 50) return "D";
    else return "F";
};

class TheoryExam : public Evaluation {
    public:
    void calculateGrade(int score)override{
        cout << "Theory Exam Grade: " << getGrade(score) << endl;
    }
};

class PracticalExam : public Evaluation {
    public:
    void calculateGrade(int score)override{
        cout << "Practical Exam Grade: " << getGrade(score) << endl;
    }
};

class ProjectWork : public Evaluation {
    public:
    void calculateGrade(int score)override{
        cout << "Project Work Grade: " << getGrade(score) << endl;
    }
};

int main() {
    Evaluation* e1 = new TheoryExam();
    e1->calculateGrade(85);
}
*/

// Question 10 :

/*
#include <iostream>
using namespace std;

class Discount {
    public:
    virtual void applyDiscount(int amount) = 0;
};

class FestiveDiscount : public Discount {
    public:
    void applyDiscount(int amount)override{
        int discount = 20;
        double finalPrice = amount-((amount*discount)/100);
        cout << "Final Price after Festive Discount: $" << finalPrice << endl;
    }
};

class LoyaltyDiscount : public Discount {
    public:
    void applyDiscount(int amount)override{
        int discount = 40;
        double finalPrice = amount-((amount*discount)/100);
        cout << "Final Price after Loyalty Discount: $" << finalPrice << endl;
    }
};

class BulkPurchaseDiscount : public Discount {
    public:
    void applyDiscount(int amount)override{
        int discount = 30;
        double finalPrice = amount-((amount*discount)/100);
        cout << "Final Price after Bulk Purchase Discount: $" << finalPrice << endl;
    }
};

int main() {
    Discount* d1 = new FestiveDiscount();
    d1->applyDiscount(1000);
}
*/