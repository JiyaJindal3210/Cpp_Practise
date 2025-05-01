// Question 1 :
/*

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a , int b){
        return a+b;
    }
    double add(double a , double b){
        return a+b;
    }
    int add(int a , int b , int c){
        return a+b+c;
    }
    void add(string a , string b){
        cout << a+b << endl;
    }
};

int main() {
    Calculator c1;
    cout << c1.add(5,10) << endl;
    cout << c1.add(3,2,1) << endl;
    c1.add("hello"," World");
    cout << c1.add(3.5,2.5) << endl;
}
*/

// Question 2 :

/*
#include <iostream>
#include <vector>
using namespace std;

class DynamicArray {
private:
    int arr1[100];
    int size;
public:
    DynamicArray(int values[],int s){
        size = s;
        for(int i=0;i<s;i++){
            arr1[i] = values[i];
        }
    }

    DynamicArray operator +(const DynamicArray& arr2){
        int newArr[100];
        int newSize = size + arr2.size;
        for (int i = 0; i < size; i++) {
            newArr[i] = arr1[i];
        }
        for (int i = 0; i < arr2.size; i++) {
            newArr[size + i] = arr2.arr1[i];
        }

        return DynamicArray(newArr, newSize);
    }
    void print() {
        cout << "{";
        for (int i = 0; i < size; i++) {
            cout << arr1[i];
            if (i < size - 1) cout << ", ";
        }
        cout << "}" << endl;
    }
};

int main() {
    int a1[] = {1, 2, 3};
    int a2[] = {4, 5, 6};

    DynamicArray arr1(a1, 3);
    DynamicArray arr2(a2, 3);

    DynamicArray arr3 = arr1 + arr2;
    arr3.print();  
}
*/

// Question 3 : 
/*
#include <iostream>
using namespace std;

class Employee {
    public:
    Employee(){
        name = "Unknown";
        salary = 0.0;
    }

    string name;
    double salary;

    Employee(string n, double s){
        name = n;
        salary = s;
    }

    Employee(const Employee &emp) {
        name = emp.name;
        salary = emp.salary;
    }

    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }

};

int main() {
    Employee e1;
    Employee e2("John",50000);
    Employee e3 = e2;
    e3.display();
}
*/

// Question 4 :

/*
#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real , imag;
public:
    ComplexNumber(){
        real = 0;
        imag = 0;
    }

    ComplexNumber(int r , int i){
        real = r;
        imag = i;
    }
    void print(){
        cout << real << " + " << imag << " i " << endl;
    }
    ComplexNumber operator +(ComplexNumber &c){
        ComplexNumber temp; 
        temp.real = real + c.real; 
        temp.imag = imag + c.imag;
        return temp;

    }
    ComplexNumber operator*(const ComplexNumber &c) {
        ComplexNumber temp;
        temp.real = (real * c.real) - (imag * c.imag); 
        temp.imag = (real * c.imag) + (imag * c.real); 
        return temp;
    }
};

int main() {
    ComplexNumber c1(3,4);
    ComplexNumber c2(1,2);
    ComplexNumber sum = c1 + c2;
    ComplexNumber product = c1 * c2;
    sum.print();
    product.print();
}
*/

// Question 5 :

/*
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double balance){
        this->balance = balance;
    }
    int deposit(int amount){
        if(amount>0){
            balance += amount;
            return balance;
        }
        else{
            cout << "Incorrect amount" << endl;
        }
    }
    double deposit(double amount){
        if(amount>0){
            balance += amount;
            return balance;
        }
        else{
            cout << "Incorrect amount" << endl;
        }
    }
    int withdraw(int amount){
        if(amount<=balance){
            balance -= amount;
            return balance;
        }
        else{
            cout << "Insufficient amount in your account!" << endl;
        }
    }

    void printBalance(){
        cout << "Current Balance: " << balance << endl;
    }

};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.deposit(100.75);
    acc.withdraw(300);
    acc.printBalance();
}
*/

// Question 6 :
/*
#include <iostream>
using namespace std;

class ECommerce {
public:
    static double applyDiscount(string category, double price) {
        double discount = 0.0;

        if (category == "electronics" || category == "Electronics") {
            discount = 0.10; // 10% discount
        } 
        else if (category == "clothing" || category == "Clothing") {
            discount = 0.20; // 20% discount
        } 
        else if (category == "groceries" || category == "Groceries") {
            discount = 0.05; // 5% discount
        } 
        else {
            cout << "Invalid category! No discount applied." << endl;
            return price;
        }

        double finalPrice = price - (price * discount);
        return finalPrice;
    }
};

int main() {
    string category;
    double price;

    cout << "Enter category: ";
    cin >> category;
    cout << "Enter price: ";
    cin >> price;

    double finalPrice = ECommerce::applyDiscount(category, price);
    
    cout << "Final Price after discount: " << finalPrice << endl;

    return 0;
}
*/

// Question 7 : 
/*
#include <iostream>
using namespace std;

class Appliance {
    public:
        virtual void turnOn(int level) = 0;
        virtual void turnOff() = 0;
        virtual ~Appliance() {}
        
};

class Fan : public Appliance {
    public:
        void turnOn(int speed)override {
            cout << "Fan is running at speed " << speed << endl;
        }
        void turnOff()override{
            cout << "Fan is turned off" << endl;
        }
};

class Light : public Appliance {
    public:
        void turnOn(int brightness)override {
            cout << "Light is glowing at brightness level " << brightness << endl;
        }
        void turnOff()override {
            cout << "Light is turned off" << endl;
        }
};

class TV : public Appliance {
    public:
        void turnOn(int volume)override {
            cout << "TV is playing at volume" << volume << endl;
        }
        void turnOff()override {
            cout << "TV is turned off" << endl;
        }
};

int main() {
    Appliance* fan = new Fan();
    Appliance* light = new Light();
    Appliance* tv = new TV();

    fan->turnOn(3);
    light->turnOn(5);
    tv->turnOn(15);

    delete fan;
    delete light;
    delete tv;

    return 0;
}
*/

// Question 8 :
/*
#include <iostream>
using namespace std;

class FoodBill {
    public:
    static int foodCost(string foodItem, int quantity) {
        int price = 0;

        if (foodItem == "pizza" || foodItem == "Pizza") {
            price = 250; 
        } 
        else if (foodItem == "burger" || foodItem == "Burger") {
            price = 150; 
        } 
        else if (foodItem == "pasta" || foodItem == "Pasta") {
            price = 200; 
        } 
        else {
            cout << "Invalid foodItem!" << endl;
        }

        int finalPrice = price*quantity;
        return finalPrice;
    }
};

int main() {
    string foodItem;
    int quantity;
    cout << "Enter foodItem: ";
    cin >> foodItem;
    cout << "Enter quantity: ";
    cin >> quantity;

    int finalPrice = FoodBill::foodCost(foodItem,quantity);

    cout << "Total bill: ₹" << finalPrice << endl;

    return 0;
}
*/

// Question 9 : 
/*
#include <iostream>
using namespace std;

class RideFare {
    public:
        static int RideCost(string vehicleType , int distance){
            int price = 0;

            if(vehicleType=="bike" || vehicleType=="Bike"){
                price = 5;
            }
            else if(vehicleType=="car" || vehicleType=="Car"){
                price = 10;
            }
            else if(vehicleType=="auto" || vehicleType=="Auto"){
                price = 7;
            }
            else {
                cout << "Invalid vehicle type!" << endl;
            }

            int FarePrice = price*distance;
            return FarePrice;
        }
};

int main() {
    string vehicleType;
    int distance;

    cout << "Enter vehicle type: ";
    cin >> vehicleType;
    cout << "Enter distance: ";
    cin >> distance;
    

    int FarePrice = RideFare::RideCost(vehicleType , distance);
    cout << "Total fare: ₹" << FarePrice << endl;
    
    return 0;
}
*/

// Question 10 :
/*
#include <iostream>
using namespace std;

class Bank {
    public:
        static double InterestRate(string accountType , int deposit , int duration){
            double rate = 0.0;

            if(accountType=="savings" || accountType=="Savings"){
                rate = 0.04;
            }
            else if(accountType=="fixed deposit" || accountType=="Fixed Deposit"){
                rate = 0.06;
            }
            else if(accountType=="recurring deposit" || accountType=="Recurring Deposit"){
                rate = 0.07;
            }
            else {
                cout << "Invalid account type!" << endl;
            }

            double totalInterest = rate*deposit*duration;
            return totalInterest;
            
        }
};

int main() {
    string AccountType;
    int deposit;
    int duration;

    cout << "Account Type: ";
    getline(cin,AccountType);
    cout << "Deposit Amount: ₹" ;
    cin >> deposit ;
    cout << "Duration: " ;
    cin >> duration;

    double totalInterest = Bank::InterestRate(AccountType,deposit,duration);
    cout << "Total interest earned: ₹" << totalInterest << endl;

}
*/