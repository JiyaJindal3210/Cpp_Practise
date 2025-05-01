/*
#include <iostream>
using namespace std;

double add(double x, double y){
    return x+y;
}
double subtract(double x,double y){
    return x-y;
}
double multiply(double x,double y){
    return x*y;
}
double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return x / y;
}
double remainder(int x ,int y){
    return x%y;
}

int main(){

    int choice;
    double num1,num2;

    do{
        cout << "Select operation:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Find Remainder" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice (1/2/3/4/5/6):";
        cin >> choice;

        if(choice == 6){
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if(choice >=1 && choice <= 5){
            cout << "Enter first number:";
            cin >> num1;
            cout << "Enter second number:";
            cin >> num2;

            switch(choice){
                case 1:
                cout << "----------------------------------------------------" << endl;
                cout << "Addition -> " << num1 << "+" << num2 << "=" << add(num1,num2) << endl;
                cout << "----------------------------------------------------" << endl;

                break;

                case 2:
                cout << "----------------------------------------------------" << endl;
                cout << "subtraction -> " << num1 << "-" << num2 << "=" << subtract(num1,num2) << endl;
                cout << "----------------------------------------------------" << endl;
                break;

                case 3:
                cout << "----------------------------------------------------" << endl;
                cout << "Multiplication -> " << num1 << "*" << num2 << "=" << multiply(num1,num2) << endl;
                cout << "----------------------------------------------------" << endl;
                break;

                case 4:
                cout << "----------------------------------------------------" << endl;
                cout << "Division -> " << num1 << "/" << num2 << "=" << divide(num1,num2) << endl;
                cout << "----------------------------------------------------" << endl;
                break;

                case 5:
                cout << "----------------------------------------------------" << endl;
                cout << "Remainder -> " << num1 << "%" << num2 << "=" << remainder(num1,num2) << endl;
                cout << "----------------------------------------------------" << endl;
                break;
            }
        }
        else{
            cout << "Invalid input! please select a valid operation." << endl;
        }

    }
    while(choice!=6);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int calculatePercentage(int a,int b,int c,int d,int e){
    int sum = a+b+c+d+e;
    return (sum / (float)(5*100))*100;
}

int assignGrade(float percentage){
    if(percentage>=90 && percentage<=100){
        return 'A+';
    }
    else if (percentage>=80 && percentage<=89){
        return 'A';
    }
    else if (percentage>=70 && percentage<=79){
        return 'B';
    }
    else if (percentage>=60 && percentage<=69){
        return 'C';
    }
    else if (percentage>=50 && percentage<=59){
        return 'D';
    }
    else {
        return 'Fail';
    }
}

int main(){

    int a ; int b ; int c ; int d ; int e;
    cin >> a >> b >> c >> d >> e;

    float percentage = calculatePercentage(a,b,c,d,e);
    char grade = assignGrade(percentage);

    cout << "Total Percenatge: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

bool flag = true;

float CtoF(float Celsius)
{
    return ((Celsius*9/5) + 32);
}

float FtoC(float Fahrenheit)
{
    return (Fahrenheit - 32)*5/9;
}

float CtoK(float Celsius)
{
    return (Celsius + 273.15);
}

void menu();
void exit();

int main()
{

    float temperature, convertedTemp;

    while (flag)
    {
        menu();
        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "--------------------------------------" << endl;

        cout << "Enter temperature : ";
        cin >> temperature;

        cout << "--------------------------------------" << endl;

        switch (choice)
        {

        case 1:
            convertedTemp = CtoF(temperature);
            cout << "Converted Temperature: " << convertedTemp << "˚F " << endl;
            break;
        case 2:
            convertedTemp = FtoC(temperature);
            cout << "Converted Temperature: " << convertedTemp << "˚C " << endl;
            break;
        case 3:
            convertedTemp = CtoK(temperature);
            cout << "Converted Temperature: " << convertedTemp << "K " << endl;
            break;
        case 4:
            exit();
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}

void menu()
{

    cout << "--------------------------------------" << endl;
    cout << "Temperature Converter : " << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Exit" << endl;
    cout << "--------------------------------------" << endl;
}

void exit()
{
    cout << "Do you want to exit(y/n): ";
    char res;
    cin >> res;
    if (res == 'y' || res == 'Y')
    {
        flag = false;
        cout << "Thank you for using our application!" << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int balance = 0;
bool flag = true;

// Function prototypes
int CheckBalance(int balance);
int depositMoney(int money, int balance);
int withdrawMoney(int money, int balance);
void menu();
void exitProgram();

int main() {
    while (flag) {
        menu();
        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "--------------------------------------" << endl;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << CheckBalance(balance) << endl;
                break;

            case 2: {
                int money;
                cout << "Please enter the amount you want to deposit: ";
                cin >> money;
                balance = depositMoney(money, balance); // Update balance
                cout << "Amount Deposited Successfully!" << endl;
                break;
            }

            case 3: {
                int money;
                cout << "Please enter the amount you want to withdraw: ";
                cin >> money;

                if (money > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance = withdrawMoney(money, balance); // Update balance
                    cout << "Amount Withdrawn Successfully!" << endl;
                }
                break;
            }

            case 4:
                exitProgram();
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << "--------------------------------------" << endl;
    }
    return 0;
}

int CheckBalance(int balance) {
    return balance;
}

int depositMoney(int money, int balance) {
    return balance + money;
}

int withdrawMoney(int money, int balance) {
    return balance - money;
}

void menu() {
    cout << "--------------------------------------" << endl;
    cout << "Bank Transaction System:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "--------------------------------------" << endl;
}

void exitProgram() {
    cout << "Do you want to exit (y/n)? ";
    char res;
    cin >> res;
    if (res == 'y' || res == 'Y') {
        flag = false;
        cout << "Thank you for using our application!" << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int num;
int a,b;
bool flag = true;

int CheckPrime(int num);
int PrintPrime(int a, int b);
void menu();
void exitProgram();

int main() {
    while (flag) {
        menu();
        int choice;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        cout << "--------------------------------------" << endl;

        switch (choice) {
            case 1:
                cout << "Enter a number to check prime or not : " ;
                cin >> num;
                cout << "--------------------------------------" << endl;
                if(CheckPrime(num)){
                    cout << "The given number " << num << " is a prime number." << endl;
                }
                else{
                    cout << "The given number " << num << " is not a prime number." << endl;
                }
                break;

            case 2: {
                cout << "Select the numbers whose between you want to check prime.";
                cout << "Enter first number : " ;
                cin >> a;
                cout << "Enter second number : ";
                cin >> b;
                cout << endl;
                PrintPrime(a,b);
                break;
            }


            case 4:
                exitProgram();
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << "--------------------------------------" << endl;
    }
    return 0;
}

int CheckPrime(int num) {
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    };
}

int PrintPrime(int a, int b) {
    for(int j=a;j<=b;j++){
        if (CheckPrime(j)){
            cout << j << " ";
        }
    }
    cout << endl;
}

void menu() {
    cout << "--------------------------------------" << endl;
    cout << "Prime Number Operations:" << endl;
    cout << "1. Check Prime" << endl;
    cout << "2. Print prime numbers in a given range" << endl;
    cout << "4. Exit" << endl;
    cout << "--------------------------------------" << endl;
}

void exitProgram() {
    cout << "Do you want to exit (y/n)? ";
    char res;
    cin >> res;
    if (res == 'y' || res == 'Y') {
        flag = false;
        cout << "Thank you for using our application!" << endl;
    }
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

bool CheckArmstrong(int num){
    int originalNum = num, sum=0,digits = 0;
    int temp = num;
    while(temp>0){
        temp /= 10;
        digits++;
    }
    temp=num;
    while(temp > 0){
        int digit = temp%10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;

}

int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;

    if(CheckArmstrong(num)){
        cout << num << " is an Armstrong number." << endl;
    } 
    else{
        cout << num << "is not an Armstrong number." << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int num;
int a,b;
int n;
bool flag = true;

int FindFactorial(int num);
void FindFibonacci(int n);
void menu();
void exitProgram();

int main() {
    while (flag) {
        menu();
        int choice;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        cout << "--------------------------------------" << endl;

        switch (choice) {
            case 1:
                cout << "Enter a number : " ;
                cin >> num;
                cout << "--------------------------------------" << endl;
                FindFactorial(num);
                break;

            case 2: {
                cout << "Select a number : ";
                cin >> n;
                cout << endl;
                FindFibonacci(n);
                break;
            }


            case 3:
                exitProgram();
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << "--------------------------------------" << endl;
    }
    return 0;
}

int FindFactorial(int num) {
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    cout << fact << endl;
}

void FindFibonacci(int n) {
    int a = 0, b = 1, c;
    for(int i=0;i<n;i++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    


}

void menu() {
    cout << "--------------------------------------" << endl;
    cout << "Factorial & Fibonacci Generator :" << endl;
    cout << "1. Calculate Factorial " << endl;
    cout << "2. First n fibonacci numbers " << endl;
    cout << "3. Exit" << endl;
    cout << "--------------------------------------" << endl;
}

void exitProgram() {
    cout << "Do you want to exit (y/n)? ";
    char res;
    cin >> res;
    if (res == 'y' || res == 'Y') {
        flag = false;
        cout << "Thank you for using our application!" << endl;
    }
}
*/



// #include <iostream>
// using namespace std;

// int num;
// int a,b;
// int n;
// bool flag = true;

// int Addition(int a);
// void Subtraction(int n);
// void Multiplication(int n);
// void Transpose(int n);
// void menu();
// void exitProgram();

// int main() {
//     while (flag) {
//         menu();
//         int choice;
//         cout << "Enter your choice (1-3): ";
//         cin >> choice;

//         cout << "--------------------------------------" << endl;

//         switch (choice) {
//             case 1:
//                 cout << "Enter a number : " ;
//                 cin >> num;
//                 cout << "--------------------------------------" << endl;
//                 FindFactorial(num);
//                 break;

//             case 2: {
//                 cout << "Select a number : ";
//                 cin >> n;
//                 cout << endl;
//                 FindFibonacci(n);
//                 break;
//             }


//             case 3:
//                 exitProgram();
//                 break;

//             default:
//                 cout << "Invalid choice! Please try again." << endl;
//         }
//         cout << "--------------------------------------" << endl;
//     }
//     return 0;
// }

// int FindFactorial(int num) {
//     int fact = 1;
//     for(int i=1;i<=num;i++){
//         fact = fact*i;
//     }
//     cout << fact << endl;
// }

// void FindFibonacci(int n) {
//     int a = 0, b = 1, c;
//     for(int i=0;i<n;i++){
//         cout << a << " ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     cout << endl;
    


// }

// void menu() {
//     cout << "--------------------------------------" << endl;
//     cout << "Factorial & Fibonacci Generator :" << endl;
//     cout << "1. Calculate Factorial " << endl;
//     cout << "2. First n fibonacci numbers " << endl;
//     cout << "3. Exit" << endl;
//     cout << "--------------------------------------" << endl;
// }

// void exitProgram() {
//     cout << "Do you want to exit (y/n)? ";
//     char res;
//     cin >> res;
//     if (res == 'y' || res == 'Y') {
//         flag = false;
//         cout << "Thank you for using our application!" << endl;
//     }
// }
