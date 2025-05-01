/*
#include<iostream>
using namespace std ;

int main() {
    
    int a,b;

    cout << " enter the value of a " << endl;
    cin >> a ;

    cout << " enter the value of b" << endl;
    cin >> b ;

    char op;
    cout << " enter the operation u want to perform"<< endl;
    cin>> op;

    switch(op) {

        case '+' : cout << (a+b) << endl;
                   break;

        case '-': cout << (a-b) << endl;  
                  break;

        case '*': cout << (a*b) << endl;
                  break;

        case '/': cout << (a/b) << endl;
                break;

        case '%' : cout << (a%b) << endl;
                   break;

        default: cout << "print a valid operation" << endl;         
    }

int amount ;
cout << " enter the amount " << endl;
cin >> amount ;
int Rs100 , Rs50 , Rs20 , Rs1;

switch(1) 
{
    case 1: Rs100 = amount/100;
    amount = amount % 100;
    cout << " number of 100 rupee note required are :" <<Rs100 << endl;

    case 2: Rs50 = amount/50;
    amount = amount % 50;
    cout << " number of 50 rupee note required are :" << Rs50 << endl;

    case 3 : Rs20 = amount/20;
    amount = amount % 20;
    cout << " number of 20 rupee note required are :"<< Rs20 << endl;

    case 4 : Rs1 = amount/1;
    amount = amount % 1 ;
    cout << " number og 1 rupee note required are :" << Rs1 << endl;

}

//functions intro;

int a , b ;
cin >> a >> b;

int ans = 1 ;

for (int i = 1 ; i<=b ; i++) {
    ans = ans * a;
}

cout << "answer is " << ans << endl;

return 0;

int m , n ;
cin >> m >> n;

int ans = 1 ;

for (int i = 1 ; i<=n ; i++) {
    ans = ans * m;
}

cout << "answer is " << ans << endl;

return 0;

int p , q ;
cin >> p >> q;

int ans = 1 ;

for (int i = 1 ; i<=q ; i++) {
    ans = ans * p;
}

cout << "answer is " << ans << endl;

return 0;

//function 1 :

#include<iostream>
using namespace std ;

void dummy(int n ) {
    n++;
    cout << " n is " << n << endl;
}

int main () {

    int n ;
    cin>>n;

    dummy(n);

    cout << " number n is " << n << endl;


    return 0;
}

#include<iostream>
using namespace std ;

void update (int a ) {
    a = a / 2;
}

int main () {
    int a = 10;
    update(a);
    cout << a << endl;
}

#include<iostream>
using namespace std ;

int update (int a) {
    a = 5;
    return a;
}

int main() {
    int a = 15;
    update(a) ;
    cout << a << endl;
}

#include<iostream>
using namespace std ;

int update (int a) {
    int ans = a * a;
    return ans ;
}

int main() {
    int a = 14;
    a = update(a);
    cout << a << endl;
}
*/

// printing 1 
#include<iostream>
using namespace std ;

int main() {
    int array[100];
    
    fill_n(array,100,1);

    for(int i = 0 ; i <= 5 ; i++) {
        cout << array[i] << " ";
    }
}