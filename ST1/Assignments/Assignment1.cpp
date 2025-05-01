/*
#include <iostream>
using namespace std;

int main() {
    //to show output; cout uses stream intertion operator(<<)

    //input taking for a single value
    cout <<"Enter age: ";

    int age;
    cin >> age;
    cout <<"Value of age: " <<age;

    string msg;
    cout << "enter your msg"<<endl;;
    cin >> msg;
    cout << "your msg is : " << msg;
}


// Student Tasks:
// Task 1: Write a program to input your name and age, then display them.
// Task 2: Create variables of type int, float, and char. Assign values and display them.
// Task 3: Take two integers as input and print their sum.
// Task 4: Write a program to calculate the area of a rectangle using inputs for length and width.
// Task 5: Input three different data types (int, float, and char) and print them together in one line.
// Task 6: Swap two numbers using a temporary variable.
// Task 7: Write a program to find the square of an input number.
// Task 8: Create a program to input and print a multi-word sentence using getline().

//--------------------------------------------- TASK 1 --------------------------------------------

#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name : " ;
    cin >> name ;
    cout << "Your name is : " << name << endl;

    int age;
    cout << "Enter your age : ";
    cin >> age ;
    cout << "Your age is : " << age << endl;

}

//--------------------------------------------- TASK 2 --------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter your number : " << endl;
    cin >> n;
    cout << " Your number is : " << n << endl;

    float f;
    cout << " Enter your float number : " << endl;
    cin >> f;
    cout << " Your float number is : " << f << endl;

    char c;
    cout << " Enter your character : " << endl;
    cin >> c;
    cout << " Your character is : " << c << endl;

}

//--------------------------------------------- TASK 3 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int a;
    cout << " Enter your number : " << endl;
    cin >> a;
    cout << " Your number is : " << a << endl;
    int b;
    cout << " Enter your number : " << endl;
    cin >> b;
    cout << " Your number is : " << b << endl;
    int sum = a+b;
    cout << " Your sum is : " << sum << endl;
}

//--------------------------------------------- TASK 4 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int length;
    cout << "enter length : " << endl;
    cin >> length;
    cout << "your length is : " << length << endl;

    int breadth;
    cout << "enter breadth : " << endl;
    cin >> breadth;
    cout << "your breadth is : " << breadth << endl;

    int area = length*breadth;
    cout << "Your area is : " << area << endl;

}

//--------------------------------------------- TASK 5 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "enter number : " << endl;
    cin >> a;

    float b;
    cout << "enter float number : " << endl;
    cin >> b;

    char c;
    cout << "enter character : " << endl;
    cin >> c;

    cout << a << " " << b << " " << c << endl;
}

//--------------------------------------------- TASK 6 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter number : " << endl;
    cin >> a;

    int b;
    cout << "Enter number : " << endl;
    cin >> b;

    cout << "before swapping a = " << a << " , b = " << b << endl;

    int temp;
    temp = a;
    a=b;
    b=temp;

    cout << "after swapping a = " << a << " , b = " << b << endl;

}

//--------------------------------------------- TASK 7 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "enter number : " << endl;
    cin >> a;

    int square = a*a;
    cout << "Your square is : " << square << endl;

}

//--------------------------------------------- TASK 8 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    string msg;

    cout <<"Enter your msg: ";

    getline(cin, msg);

    cout <<"Your msg is: "<< msg << endl;

}

//--------------------------------------------- TASK 1 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "enter name : " << endl;
    cin >> name;

    int age;
    cout << "enter age : " << endl;
    cin >> age;

    long rollNo;
    cout << "enter roll number : " << endl;
    cin >> rollNo;

    cout << "-----------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "-----------------------------------------------" << endl;

}

//--------------------------------------------- TASK 2 --------------------------------------------

#include <iostream>
using namespace std;

int main() {
    string movie;
    cout << "enter movie : " << endl;
    cin >> movie;

    int year;
    cout << "enter year : " << endl;
    cin >> year;

    cout << "-----------------------------------------------" << endl;
    cout << "Your favorite movie is: " << movie << endl;
    cout << "It was released in: " << year << endl;
    cout << "-----------------------------------------------" << endl;

}

//--------------------------------------------- TASK 3 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int Length;
    cout << "enter length : " << endl;
    cin >> Length;
    
    int Width;
    cout << "enter width : " << endl;
    cin >> Width;

    cout << "-----------------------------------------------" << endl;
    cout << "Length: " << Length << endl;
    cout << "Width: " << Width << endl;
    cout << "-----------------------------------------------" << endl;

}

//--------------------------------------------- TASK 4 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    string firstName;
    cout << "enter firstName : " << endl;
    cin >> firstName;
    
    string lastName;
    cout << "enter lastName : " << endl;
    cin >> lastName;

    string name = firstName + " " + lastName;

    cout << "-----------------------------------------------" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Full Name: " << name << endl;
    cout << "-----------------------------------------------" << endl;
}

//--------------------------------------------- TASK 5 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "enter age : " << endl;
    cin >> age;

    int year;
    cout << "enter birth year : " << endl;
    cin >> year;

    cout << "-----------------------------------------------" << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "Your estimated birth year is: " << year << endl;
    cout << "-----------------------------------------------" << endl;

}

//--------------------------------------------- TASK 6 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int Principal;
    cout << "Enter principal value : " << endl;
    cin >> Principal;

    int Rate;
    cout << "Enter Rate value : " << endl;
    cin >> Rate;

    int Time;
    cout << "Enter Time value : " << endl;
    cin >> Time;

    int SimpleInterest = (Principal*Rate*Time)/100;

    cout << "-----------------------------------------------" << endl;
    cout << "Simple Interest: " << SimpleInterest << endl;
    cout << "-----------------------------------------------" << endl; 

}

//--------------------------------------------- TASK 7 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int number1;
    cout << "Enter number 1 : " << endl;
    cin >> number1;

    int number2;
    cout << "Enter number 2 : " << endl;
    cin >> number2;

    cout << "-----------------------------------------------" << endl;
    cout << "Before Swapping: Number 1 = " << number1 << ", Number 2 = " << number2 << endl;

    int temp;
    temp=number1;
    number1=number2;
    number2=temp;

    cout << "After Swapping: Number 1 = " << number1 << ", Number 2 = " << number2 << endl;
    cout << "-----------------------------------------------" << endl;

}

//--------------------------------------------- TASK 8 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int Celsius;
    cout << "enter celsius : " << endl;
    cin >> Celsius;

    int Fahrenheit = (Celsius*9/5)+32;

    cout << "-----------------------------------------------" << endl;
    cout << "Temperature in Fahrenheit: " << Fahrenheit << endl;
    cout << "-----------------------------------------------" << endl;
}

//--------------------------------------------- TASK 9 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int totalDays;
    cout << "total days : " << endl;
    cin >> totalDays;

    int Years = totalDays/365;
    int leftDays1 = totalDays%365;
    int Weeks = leftDays1/7;
    int Days = leftDays1%7;

    cout << "-----------------------------------------------" << endl;
    cout << "Years: " << Years << endl;
    cout << "Weeks: " << Weeks << endl;
    cout << "Days: " << Days << endl;
    cout << "-----------------------------------------------" << endl;
 
}

//--------------------------------------------- TASK 10 --------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int length;
    cout << "enter length : " << endl;
    cin >> length;

    int width;
    cout << "enter width : " << endl;
    cin >> width;

    int height;
    cout << "enter height : " << endl;
    cin >> height;

    int volume = length*width*height;

    cout << "The volume of the box is: " << volume << endl;

}
*/