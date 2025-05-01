/*
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    //implicit typeCasting - conversion from small to big data type 

    // short num = 45;
    // int num1 = num;
    // cout << typeid(num).name() << endl;
    // cout << typeid(num1).name();

    //Explicit typeCasting - forcefully converting big to small

    // int num = 45232;
    // short num1 = (short)num;
    // cout << num << endl;
    // cout << num1 << endl;

    // char c = 'a';
    // int  charValue = (char)c;
    // cout << charValue << endl; // gives ascii value 



}


#include <iostream>
using namespace std;

int main() {

    // float a = 2.34;
    // int x = a;
    // cout << a << endl;
    // cout << x << endl;

    // int x = 29;
    // int y = 20;
    // float avg = (x+y)/2;
    // cout << avg << endl;

    int Apples = 3;
    int Bananas = 5;
    int Oranges = 2;

    float TotalCost = (Apples*1.5)+(Bananas*0.75)+(Oranges*2.0);

    float SalesTax = 0.05*TotalCost;

    float FinalBill = TotalCost + SalesTax;

    cout << "Total cost before tax: Rs" << TotalCost << endl;
    cout << "Sales tax: Rs" << SalesTax << endl;
    cout << "Final bill: Rs" << FinalBill << endl;

}


#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    int Apples = 3;
    int Bananas = 5;
    int Oranges = 2;

    float TotalCost = (Apples*1.5)+(Bananas*0.75)+(Oranges*2.0);

    float SalesTax = 0.05*TotalCost;

    float FinalBill = TotalCost + SalesTax;

    cout << "Total cost before tax: Rs" << TotalCost << endl;
    cout << "Sales tax: Rs" << SalesTax << endl;
    cout << "Final bill: Rs" << FinalBill << endl;

}

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    
    int age1 = 25;
    int age2 = 30;

    cout <<  (age1>age2) << endl;
    cout <<  (age1<age2) << endl;
    cout <<  (age1==age2) << endl;
    cout <<  (age1!=age2) << endl;
    
}


#include <iostream>
using namespace std;

int main() {

    int age = 20;
    int disqualified = false;

    cout << (age>=18 && !disqualified) << endl;
    cout << (age<18 || disqualified) << endl;
    
}

#include <iostream>
using namespace std;

int main() {

    int num=10;
    cout << num++ << endl; //10
    cout << ++num << endl; //12
    cout << num-- << endl; //12
    cout << --num << endl; //10
 
}

#include <iostream>
using namespace std;

int main() {

    int x = 15;
    int y = 10;
    cout << ++x * y-- - x++ << endl;

    int p = 8;
    int q=5;
    cout << p-- - --q + ++p << endl;

    int m=3 ;
    int n = 7;
    cout << m++ * ++n - n-- << endl;

    int i = 10 ;
    int j = 5;
    cout << --i * j++ + ++i * --j << endl;

}
*/



