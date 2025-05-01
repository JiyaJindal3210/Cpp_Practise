// Question 1 :

/*
#include <iostream>
using namespace std;

class Temperature {
    private:
        double celsius;
    public:
        Temperature(double fahrenheit){
            celsius = (fahrenheit-32)* 5/9;
        }

        void displayTemperature(){
            cout << "Temperature: " << celsius << endl;
        }
};

int main() {
    double fahrenheit;
    cout << "Enter temp: " ;
    cin >> fahrenheit;
    Temperature t(fahrenheit);
    t.displayTemperature();

    return 0;
}
*/

// Question 2:

/*
#include <iostream>
using namespace std;

class Distance {
    private:
        float distance;

    public:
        Distance(float kilometers){
            distance = kilometers/1000;
        }

        operator float(){
            return distance;
        }

};

int main() {
    Distance d(1750);
    float kilometers = d;
    cout << "Distance in km: " << kilometers << endl;
}
*/

// // Ques 3 :
// #include <iostream>
// using namespace std;

// class Square{
//     int side;
//     public:
//     Square(int x){ side = x; }
//     int getSide() { return side; }
// };
// class Rectangle{
//     int length, width;
//     public:
//     Rectangle(int l, int w) : length(l), width(w) {}
//     operator Square() {
//         return Square(min(length, width));
//     }
// };
// int main() {
//     Rectangle rect(10, 20);
//     Square sq = rect;
//     cout << "Side of Square: " << sq.getSide() << endl;
//     return 0;
// }


// // Ques 4 :

// #include <iostream>
// using namespace std;

// class Time24 {
//     private:
//     int hours, minutes;
//     public:
//     Time24(int h, int m) : hours(h), minutes(m) {}
//     void display() {
//         cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " (24-hour format)" << endl;
//     }
// };
// class Time12 {
//     private:
//     int hours, minutes;
//     string period;
//     public:
//     Time12(int h, int m, string p) : hours(h), minutes(m), period(p) {}

//     operator Time24() {
//         int h = (period == "PM" && hours != 12) ? hours + 12 : (period == "AM" && hours == 12) ? 0 : hours;
//         return Time24(h, minutes);
//     }
// };
// int main() {
//     Time12 t1(10, 30, "PM");
//     Time24 t2 = t1;
//     t2.display();
// }


// // Ques 5:

// #include <iostream>
// using namespace std;

// class Weight_Pounds {
//     double pounds;
//     public:
//     Weight_Pounds(double p) : pounds(p) {}
//     void display() { cout << "Weight: " << pounds << " lbs" << endl; }
// };
// class Weight_KG {
//     double kg;
//     public:
//     Weight_KG(double k) : kg(k) {}
//     Weight_Pounds toPounds() { return kg * 2.20462; }
// };
// int main() {
//     Weight_KG w1(50);
//     Weight_Pounds w2 = w1.toPounds();
//     w2.display();
// }


// // Ques 6:
// #include <iostream>
// using namespace std;

// class Fraction {
//     int num, den;
//     public:
//     Fraction(int n) : num(n), den(1) {}
//     void display() { cout << num << "/" << den << endl; }
// };
// int main() {
//     Fraction f1 = 7;
//     f1.display();
// }


// // Ques 7:
// #include <iostream>
// using namespace std;

// class Fraction {
//     int num, den;
//     public:
//     Fraction(int n, int d) : num(n), den(d) {}
//     operator double() { return num * 1.0 / den; }
// };
// int main() {
//     Fraction f(3, 4);
//     cout << (double)f << endl;
// }


// // Ques 8:
// #include <iostream>
// using namespace std;

// class BankAccount {
//     double balance;
//     public:
//     BankAccount(double b) : balance(b) {}
//     operator bool() { return balance > 0; }
// };
// int main() {
//     BankAccount acc1(1000);
//     cout << (acc1 ? "Active" : "Inactive") << endl;
// }


// Ques 9:
// #include <iostream>
// using namespace std;

// #include <sstream>
// class IPAddress {
//     int octet1, octet2, octet3, octet4;
//     public:
//     IPAddress(string ip) {
//         char dot;
//         stringstream ss(ip);
//         ss >> octet1 >> dot >> octet2 >> dot >> octet3 >> dot >> octet4;
//     }
//     void display() {
//         cout << octet1 << "." << octet2 << "." << octet3 << "." << octet4 << endl;
//     }
// };
// int main(){
//     IPAddress ip1("192.168.1.1");
//     ip1.display();
// }


// // Ques 10:
// #include <iostream>
// using namespace std;

// class IPAddress {
//     int octet1, octet2, octet3, octet4;
//     public:
//     IPAddress(int o1, int o2, int o3, int o4) : octet1(o1), octet2(o2), octet3(o3), octet4(o4) {}

//     operator string() {
//         stringstream ss;
//         ss << octet1 << "." << octet2 << "." << octet3 << "." << octet4;
//         return ss.str();
//     }
// };
// int main(){
//     IPAddress ip2(192, 168, 1, 1);
//     string strIp = ip2;
//     cout << "IP Address: " << strIp << endl;
// }