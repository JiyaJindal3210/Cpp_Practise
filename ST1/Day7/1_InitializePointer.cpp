// ---------------------- 1) INITIALIZE POINTER -----------------

/*
#include <iostream>
using namespace std;

int main() {

    int x = 10;
    cout << "Address of x : " << &x << endl;
    int *p = &x;
    cout << p << endl;
    cout << "Value of *p:" << *p << endl;

    int y = 20;
    p = &y;

    cout << "Address of y : " << &y << endl;
    cout << "Value of p:" << p << endl;
    cout << "Value of *p : " << *p << endl;

}
*/

// ---------------------------2) DOUBLE POINTERS -----------------------
/*
#include <iostream>
using namespace std;

int main() {

    int x = 10;
    cout << "Address of x : " << &x << endl;
    int *p = &x;
    cout << p << endl;
    cout << "Value of *p:" << *p << endl;


    int **q = &p;
    cout << "Value of q:" <<  q  << endl;
    cout << "Value of *q:" << *q  << endl;
    cout << "Value of **q:" << **q << endl;

}
*/

// ----------------------3) CONSTANT POINTERS ------------------

/*
#include <iostream>
using namespace std;

int main() {

    int n = 10;
    int *const p = &n;
    cout << "Value of p:" << p << endl;
    cout << "value of *p:" << *p << endl;
    int y = 20;
    // p = &y;
    cout << "value of p:" << p << endl;
    cout << "Value of *p:" << *p << endl;
}
*/

// -------------------4) POINTER TO FUNCTION -----------------------
#include <iostream>
using namespace std;

void increasedPrice(int p){
    // p = p + 10;
    *p = *p + 10;
}

int main() {
    int price = 100;
    cout << "Price before increase: " << price << endl; //100 -> 100
    increasedPrice(price);
    cout << "Price after increase: " << price << endl; //100 -> 110

}






