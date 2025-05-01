/*
#include <iostream>
using namespace std;

class Mobile{

    public:
    string modelName;
    double price;

    Mobile(string mn, double p){
        modelName = mn;
        price = p;
    };
};

int main() {


    Mobile mobile1 = Mobile("Samsung Galaxy S24", 99999.99);

    Mobile *ptr = &mobile1;

    cout << ptr->price << endl;
    cout << ptr->modelName << endl;
}
*/

//------------------------- libraries -----------------------

/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << abs(-45) << endl; //45
    cout << floor(4.5) << endl;  //4 -> greatesst integer not more than 4.5
    cout << ceil(4.5) << endl;  //5 -> smallest integer more than 4.5
    cout << round(4.5) << endl;  //5
    cout << round(4.4) << endl;  //4

    float x = 45.6543;
    printf("%.2f",x);
}
*/