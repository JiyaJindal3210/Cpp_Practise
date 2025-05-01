/*
#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter three numbers: " << endl;
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout << "All numbers are equal." << endl;
    }

    else if(a==b || b==c || c==a) {
        cout << "Two numbers are equal." << endl;
    }

    else{
        int largest = max(a,max(b,c));
        cout << "The largest number is: " << largest << endl;
    }

}


#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter sides of the triangle: "; 
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>>0) {
        if(a==b && b==c) {
            cout << "Valid Equilateral Triangle " << endl;
        }
        else if(a==b || b==c || c==a) {
            cout << "Valid Isosceles Triangle " << endl;
        }
        else{
            cout << "Valid Scalene Triangle" << endl;
        }
    }
    

}


#include <iostream>
using namespace std;

int main() {

    int billAmount;
    cout << "Enter the bill amount: " ;
    cin >> billAmount;

    if(billAmount>5000){
        cout << "Discount: ₹" << 0.2*billAmount << endl;
        cout << "Final amount: ₹" << billAmount - 0.2*billAmount << endl;
    }
    else if(billAmount>3000 && billAmount<5000) {
        cout << "Discount: ₹" << 0.1*billAmount << endl;
        cout << "Final amount: ₹" << billAmount - 0.1*billAmount << endl;
    }
    else {
        cout << "Discount: ₹0 " << endl;
        cout << "Final amount: ₹" << billAmount << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter a number: " ;
    cin >> a;

    if(a>0) {
        cout <<"positive" << endl;
    }      
    else if (a<0) {
        cout <<"negative" << endl;
    }
    else{
        cout << "Zero" << endl;
    }

    if(a%2==0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd " << endl;
    }

    if (a % 3 == 0 && a % 5 == 0) {
        cout << "divisible by both 3 and 5" << endl;
    } else if (a % 3 == 0) {
        cout << "divisible by 3" << endl;
    } else if (a % 5 == 0) {
        cout << "divisible by 5" << endl;
    } else {
        cout << "not divisible by 3 or 5" << endl;
    }

    
}


#include <iostream>
using namespace std;

int main() {

    double a,b,c;
    cout << "Enter values of a,b,c: ";
    cin >> a >> b >> c;

    double discriminant = (b*b)-(4*a*c);

    if (discriminant > 0) {
        cout << "The equation has two distinct real roots." << endl;
    } 
    else if (discriminant == 0) {
        cout << "The equation has two equal real roots." << endl;
    } 
    else {
        cout << "The equation has two complex roots." << endl;
    }

}


#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age: "<<endl;
    cin>>age;

    int BMI;
    cout << "Enter BMI: "<<endl;
    cin>>BMI;

    if(age<18){
        cout << "Suggested Plan : Teen Plan" << endl;
    }
    else if(age>=18 && BMI<25){
        cout << "Suggested Plan : Standard Plan" << endl;
    }
    else if (BMI>=25){
        cout << "Suggested Plan : Weight Loss Plan" << endl;
    }

}


#include <iostream>
using namespace std;

int main() {

    int theoryMarks;
    cout << "Enter theory marks : " << endl;
    cin >> theoryMarks;

    int practicalMarks;
    cout << "Enter practical marks : " << endl;
    cin >> practicalMarks;

    if(theoryMarks>=40 && practicalMarks>=50){
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int units;
    cout << "Enter electricity units : " ;
    cin >> units;

    if(units>=101 && units<=300){
        cout << "Total bill : ₹" << (8*units) << endl;
    }
    else if(units>300) {
        cout << "Total bill : ₹" << (10*units) << endl;
    }
    else if(units<=100) {
        cout << "Total bill : ₹" << (5*units) << endl;
    }

}


#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "Enter year : " ;
    cin >> year;

    if(year%4==0){
        if(year%100!=0){
            cout << "Leap Year ";
        }
        else if(year%400==0){
            cout << "Leap Year ";
        }
    }
    else{
        cout << "Not a Leap Year ";
    }

    if(year%100==0){
        cout << "and Century Year" << endl;
    }
    else{
        cout << "and Not a Century Year" << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    char a;
    cout << "Enter a character : " ;
    cin >> a;

    if(a>='0' && a<='9'){
        cout << "A Digit " << endl;
    }
    else if(a>='A' && a<='Z') {
        cout << "An Uppercase letter " << endl;
    }
    else if(a>='a' && a<='z') {
        cout << "An Lowercase letter " << endl;
    }
    else{
        cout << "A Special character " << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int salary;
    cout << "Enter salary: ";
    cin >> salary;

    int yearsExperience;
    cout << "Enter years of experience: ";
    cin >> yearsExperience;

    if (yearsExperience > 10 && salary > 50000) {
        // Apply both bonus and deduction correctly
        double bonusTax = (0.10 - 0.05) * salary; // Net increase of 5%
        double finalSalary = salary + bonusTax;
        cout << "Final Salary: ₹" << finalSalary << endl;
    } 
    else if (salary > 50000) {
        // Only apply deduction if salary is greater than ₹50,000
        double finalSalary = salary - (0.05 * salary);
        cout << "Final Salary: ₹" << finalSalary << endl;
    }
    else if (yearsExperience > 10) {
        // Only apply bonus if years of experience is greater than 10
        double finalSalary = salary + (0.1 * salary);
        cout << "Final Salary: ₹" << finalSalary << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int weight;
    cout << "Enter weight (kg): " ;
    cin >> weight;

    double height;
    cout << "Enter height (m): ";
    cin >> height;

    float BMI = weight/(height*height);

    if(BMI<18.5){
        cout << "BMI: " << BMI << endl;
        cout << "Category: Underweight" << endl;
    }
    else if(BMI>=18.5 && BMI<24.9) {
        cout << "BMI: " << BMI << endl;
        cout << "Category: Normal weight" << endl;
    }
    else if(BMI>=25 and BMI<29.9) {
        cout << "BMI: " << BMI << endl;
        cout << "Category: Overweight" << endl;
    }
    else{
        cout << "BMI: " << BMI << endl;
        cout << "Category: Obese" << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int distance;
    cout << "Enter distance travelled (km): ";
    cin >> distance;


    if(distance<=10) {
        cout << "Total Fare: ₹" << 8*distance << endl;
    }
    else if(distance>=11 && distance<=50) {
        cout << "Total Fare: ₹" << 6*distance << endl;
    }
    else {
        cout << "Total Fare: ₹" << 5*distance << endl;
    }
}


#include <iostream>
using namespace std;

int main() {

    int balance;
    cout << "Enter current balance: " ;
    cin >> balance;

    int withdrawal;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    if(balance>500){
        if(withdrawal%100==0){
            cout << "Total balance: " << balance-withdrawal << endl;
        }
    }
    else if(balance<500){
        cout << "Error: Balance is less than ₹500 ." << endl;
    }
    else if(balance>500){
        if(withdrawal%100!=0) {
            cout << "Error: Amount must be a multiple of 100." << endl;
        }
    }
}


#include <iostream>
using namespace std;

int main() {

    int marks;
    cout << "Enter marks: " ;
    cin >> marks;

    int attendance;
    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if(marks>=90 && attendance>=75){
        cout << "Grade: A" << endl;
    }

    else if(marks>=75 && attendance>=60){
        cout << "Grade: B" << endl;
    }

    else if(marks>=50 && attendance>=50 ){
        cout << "Grade: C" << endl;
    }

    else{
        cout << "Fail" << endl;
    }


}
*/

