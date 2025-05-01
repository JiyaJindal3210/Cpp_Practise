// Question 1 : 
/*
#include <iostream>
using namespace std;

class Book {
    private:
        int bookId;
        string bookTitle;
        string authorName;
        int price;

    public:
        Book(int i , string t , string an , int p){
            bookId = i;
            bookTitle = t;
            authorName = an;
            price = p;
        }

        // Getter methods

        int getBookId(){
            return bookId;
        }

        string getBookTitle(){
            return bookTitle;
        }

        string getAuthorName(){
            return authorName;
        }

        int getPrice(){
            return price;
        }

        // // Setter methods : 

        // void setBookId(int id){
        //     bookId = id;
        // }

        // void setBookTitle(string title){
        //     bookTitle = title;
        // }

        // void setAuthorName(string name){
        //     authorName = name;
        // }

        // void setPrice(int bookPrice){
        //     price = bookPrice;
        // }


};

int main() {

    Book b1(101,"C++ Programming","Bjarne Stroustrup",500);

    cout << endl;
    cout << "Book Details : " << endl;
    cout << "ID: " << b1.getBookId() << endl;
    cout << "Title: " << b1.getBookTitle() << endl;
    cout << "Author: " << b1.getAuthorName() << endl;
    cout << "Price: " << b1.getPrice() << endl;
    cout << endl;

    return 0;
}
*/

// Question 2 :
/*
#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int price;

    public:
        Car(string b , string m , int p){
            brand = b;
            model = m;
            price = p;
        }

        string getBrand(){
            return brand;
        }
        string getModel(){
            return model;
        }
        int getPrice(){
            return price;
        }

};

int main() {
    Car c1("Toyoto","Fortuner",3500000);

    cout << endl;
    cout << "Car Details: " << endl;
    cout << "Brand: " << c1.getBrand() << endl;
    cout << "Model: " << c1.getModel() << endl;
    cout << "Price: " << c1.getPrice() << endl;
    cout << endl;

    return 0;
}
*/

// Question 3 :
/*
#include <iostream>
using namespace std;

class Student {
    private:
        int ID;
        string name;
        string sport;
        int rank;

    public:
        Student(int i , string n , string s , int r){
            ID = i;
            name = n;
            sport = s;
            rank = r;
        }

        int getID(){
            return ID;
        }
        string getName(){
            return name;
        }
        string getSport(){
            return sport;
        }
        int getRank(){
            return rank;
        }
};

int main() {
    Student s1(23,"Raj","Badminton",2);

    cout << endl;
    cout << "Student Details: " << endl;
    cout << "ID: " << s1.getID() << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Sport: " << s1.getSport() << endl;
    cout << "Rank: " << s1.getRank() << endl;
    cout << endl;

    return 0;
}
*/

// Question 4 :
/*
#include <iostream>
using namespace std;

class Employee {
    protected:
        int employeeID;
        string employeeName;

    public:
        Employee(int i , string n){
            employeeID  = i;
            employeeName = n;
        }

        void display() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Name: " << employeeName << endl;
        }

};

class Manager : public Employee {
    private:
        int teamSize;
    public:
    Manager(int i , string n , int ts) : Employee(i , n) {
        teamSize = ts;
    }
    void display() {
        Employee::display(); // Call base class display
        cout << "Managing Team Size: " << teamSize << endl;
    }

};

int main() {
    int employeeID , teamSize ;
    string employeeName;

    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cin.ignore();  // Clear input buffer
    cout << "Enter Name: ";
    getline(cin, employeeName);
    cout << "Enter Team Size: ";
    cin >> teamSize;

    Manager m1(employeeID, employeeName, teamSize);
    cout << endl;
    m1.display();


    return 0;
}
*/

// Question 5 :
/*
#include <iostream>
using namespace std;

class Product {
    private:
        int ID;
        string name;
        int price;
        int discount;
    
    public:
        Product(int i , string n , int p , int d){
            ID = i;
            name = n;
            price = p;
            discount = d;
        }

        int getID(){
            return ID;
        }
        string getName(){
            return name;
        }
        int getPrice(){
            return price;
        }
        int getDiscount(){
            return discount;
        }

        // void display(){
        //     cout << "Product ID: " << ID << endl;
        //     cout << "Name: " << name << endl;
        //     cout << "Price before discount: " << price << endl;
        // }


};

int main() {
    int ID , price , discount;
    string name;

    cout << "Enter Product ID: " ;
    cin >> ID;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin,name);
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Discount(%): ";
    cin >> discount;
    

    Product p1(ID,name,price,discount);

    cout << endl;
    cout << "Product ID: " << p1.getID() << endl;
    cout << "Name: " << p1.getName() << endl;
    cout << "Price after discount: " << price - ((discount / 100.0) * price) << endl;
    cout << endl;

    return 0;
}
*/

// Question 6 : 
/*
#include <iostream>
using namespace std;

class University {
    private:
        string name;
        int age;
        string facultyID;
        string department;
        string reseachArea;
    public:
        University(string n , int a , string ID , string d , string ra){
            name = n;
            age = a;
            facultyID = ID;
            department = d;
            reseachArea = ra;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getID(){
            return facultyID;
        }
        string getDepartment(){
            return department;
        }
        string getResearchArea(){
            return reseachArea;
        }
};

int main() {
    string name , department , researchArea;
    int age ;
    string facultyID;

    // cin.ignore();
    cout << "Enter Name : " ;
    getline(cin,name);
    cout << "Enter Age : ";
    cin >> age;
    cout << "Enter Faculty ID : ";
    cin >> facultyID;
    cin.ignore();
    cout << "Enter Department : ";
    getline(cin,department) ;
    cout << "Enter Research Area : ";
    getline(cin,researchArea);

    University u1(name,age,facultyID,department,researchArea);

    cout << endl;
    cout << "Research Faculty Details: " << endl;
    cout << "Name : " << u1.getName() << endl;
    cout << "Age : " << u1.getAge() << endl;
    cout << "Faculty ID: " << u1.getID() << endl;
    cout << "Department : " << u1.getDepartment() << endl;
    cout << "Research Area: " << u1.getResearchArea() << endl;
    cout << endl;
    
    return 0;
}
*/

// #include <iostream>
// using namespace std;

// class Order{
//     private:
//     string name;
//     string Product;
//     int quantity;
//     float price;



//     public:
//     void inputDetails(){
//         cout<<"Enter Customer Name : ";
//         getline(cin,name);
//         cout<<"Enter Product Name : ";
//         getline(cin,Product);
//         cout<<"Enter quantity:";
//         cin>>quantity;
//         cin.ignore();
//         cout<<"Enter Price : ";
//         cin>>price;
//         cin.ignore();




//     }

//     void showDetails(){
//         cout<<"Order Summary"<<endl;
//         cout<<"Customer Name: "<<name<<endl;
//         cout<<"Product Name: "<<Product<<endl;
//         cout<<"Unit Price : "<<price<<endl;
//         cout<<"Quantity: "<<quantity<<endl;
//         cout<<"Total Amount: "<<price*quantity<<endl;


//     }
// };

// int main() {

//         Order o1;
//         o1.inputDetails();
//         o1.showDetails();
       
//     }

// citizen registeration system

// #include <iostream>
// using namespace std;

// class Citizen {
// private:
//     string name;
//     int age;
//     string city;

// public:
//     void inputDetails() {
//         cout << "Enter Citizen Name: ";
//         getline(cin, name);
//         cout << "Enter Age: ";
//         cin >> age;
//         cin.ignore();
//         cout << "Enter City: ";
//         getline(cin, city);
//     }

//     void showDetails() {
//         cout << "\nCitizen ID Card:\n";
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "City: " << city << endl;
//     }
// };

// int main() {
//     Citizen c1;
//     c1.inputDetails();
//     c1.showDetails();
    
// }

// Vehicle System

// #include <iostream>
// using namespace std;

// class VehicleInsurance {
// private:
//     string vehicleNumber;
//     string ownerName;
//     string vehicleType;
//     float insuranceAmount;

// public:
//     void inputDetails() {
//         cout << "Enter Vehicle Number: ";
//         getline(cin, vehicleNumber);
//         cout << "Enter Owner Name: ";
//         getline(cin, ownerName);
//         cout << "Enter Vehicle Type: ";
//         getline(cin, vehicleType);
//         cout << "Enter Insurance Amount: ";
//         cin >> insuranceAmount;
//     }

//     void showDetails() {
//         cout << "\nInsurance Details:\n";
//         cout << "Vehicle Number: " << vehicleNumber << endl;
//         cout << "Owner: " << ownerName << endl;
//         cout << "Vehicle Type: " << vehicleType << endl;
//         cout << "Insurance Amount: " << insuranceAmount << endl;
//     }
// };

// int main() {
//     VehicleInsurance v1;
//     v1.inputDetails();
//     v1.showDetails();
//     return 0;
// }


// Movie Ticket Booking System

#include <iostream>
using namespace std;

class Movie {
private:
    string MovieName;
    string CustomerName;
    int Number;
    float Price;

public:
    void inputDetails() {
        cout << "Enter Movie Name: ";
        getline(cin, MovieName);
        cout << "Enter Customer Name: ";
        getline(cin, CustomerName);
        cout << "Enter Number of tickets: ";
        cin>>Number;
        cin.ignore();
        cout << "Enter ticket per price: ";
        cin >> Price;
        cin.ignore();

    }

    void showDetails() {
        cout << "\nTicket Details:\n";
        cout << "Movie Name: " << MovieName << endl;
        cout << "Customer: " << CustomerName << endl;
        cout << "Number of Tickets: " << Number << endl;
        cout << "Total Price: " << Price*Number << endl;
    }
};

int main() {
    Movie m1;
    m1.inputDetails();
    m1.showDetails();
    return 0;
}