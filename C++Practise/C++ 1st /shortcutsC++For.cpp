#include<iostream>
using namespace std;

/*
#define PI 3.14
int main() {
    
    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;
    cout << " area is " << area << endl;


    return 0;
}
*/
int score = 15;



void a(int& i) {

    cout << score << " in a" << endl;

    char ch = 'a';
    cout << i << endl;
   // b(i);
}

void b(int& i) {
    cout << score << " in b" << endl;

    cout << i << endl;
}

int main() {

    cout << score << " in main" << endl;

    int i = 5; 
    a(i);
    b(i);

    return 0;
}