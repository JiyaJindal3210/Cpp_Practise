/*
#include<iostream>
using namespace std ;

int main() {
 
    int n ;
    cin>>n;
    /*
    int ans = 0;
    int i = 0 ;
    while(n!=0) {

        int bit = n & 1 ;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout << " answer is " << ans << endl;
    
    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if (digit == 1) {

            ans = ans + pow(2 , i ) ; 
        }
        n = n/10;
        i++;

    }
    cout << ans << endl;
}

// ****** prime or not-> ********


bool isPrime(int n) {

    if(n<=1)
    return false;

    for(int i=2; i<n ; i++) {

        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << " It is a Prime Number " << endl;
    }
    else{
        cout << " It is not a Prime Number " << endl;
    }


    return 0;
}

// ******* GCD / HCF -> *******
#include<iostream>
using namespace std;

int gcd(int a , int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b) {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {

    int a,b;
    cout << "Enter the values of a and b " << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;


    return 0;
}

// ******** FACTORIAL -> ******** 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    int m = pow(10,9)+7;
    int factorial = 1;

    while(n>0) {
        factorial = ((factorial)*(n % m))%m;
        n--;
    }
    return factorial;
}

int main() {
    int n;
    cout << " enter n : ";
    cin >> n;
    cout << fact(n);
}
*/
#include <iostream>
using namespace std;

int main() {
	int n = 100;
	int count = 0;
	
	// Count the number of integers divisible by 2
	for(int i = 2; i < n; i += 2) {
		count++;
	}
	
	// Count the number of integers divisible by 3
	for(int i = 3; i < n; i += 3) {
		count++;
	}
	
	// Count the number of integers divisible by 5
	for(int i = 5; i < n; i += 5) {
		count++;
	}
	
	// Count the number of integers divisible by both 2 and 3
	for(int i = 6; i < n; i += 6) {
		count--;
	}
	
	// Count the number of integers divisible by both 2 and 5
	for(int i = 10; i < n; i += 10) {
		count--;
	}
	
	// Count the number of integers divisible by both 3 and 5
	for(int i = 15; i < n; i += 15) {
		count--;
	}
	
	// Count the number of integers divisible by 2, 3, and 5
	for(int i = 30; i < n; i += 30) {
		count++;
	}
	
	// Print the final count
	cout << "The number of positive integers less than " << n << " that are divisible by either 2, 3, or 5 is " << count << "." << endl;
	
	return 0;
}
