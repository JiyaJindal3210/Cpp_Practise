/*
#include<iostream>
using namespace std ;

bool isEven(int a ) {

    if (a&1) {
        return 0;
    }
    else {
        return 1;
    }

}

int main() {

    int num;
    cin>> num;

    if (isEven(num)) {
       cout << " number is even " << endl;
    }
    else {
        cout << " number is odd "  << endl;
    }  

}

#include<iostream>
using namespace std ;

int factorial(int n ) {

    int fact = 1 ;

    for ( int i = 1 ; i <=n ; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n , int r ) {

    int num = factorial(n) ;

    int denom = factorial(r) * factorial(n-r);

    return num/denom;   
}

int main() {

    int n , r;

    cin>> n >> r ;

    cout << " answer is " << nCr(n , r ) << endl;
}

#include<iostream>
using namespace std ;

void printCounting(int num ) {

   // cout << n << endl;
    for (int i =1 ;i <=n; i++) {
        cout << i << " ";
    }
    cout << endl;
    //return ;// can be usd not important to use here 
}

int main(){

    int n ;
    cin>>n;

    printCounting (n);

    return 0 ;
}
*/

#include<iostream>
using namespace std ;

// 1 -> Prime no.
// 0 -> Not a Prime no.

bool isPrime(int n ) {

    for (int i = 2 ; i<n; i++) {

        if (n%i == 0 ) {
            return 0;
        }
    }

    return 1;

}

int main() {

    int n ;
    cin>>n;

    if (isPrime(n)) {
        cout << " is a prime no." <<endl;
    }

    else {
        cout << " not a prime no." << endl;
    }
}