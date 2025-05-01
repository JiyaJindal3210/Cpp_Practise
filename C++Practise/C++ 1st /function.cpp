/*
#include<iostream>
using namespace std ;


int power () {

    int a , b;
    cin>> a >> b ;

    int ans = 1 ;

    for ( int i = 1 ; i <=b; i++) {
        ans = ans * a ;
    }

    return ans ;
}

int main() {


int a , b ;
cin >> a >> b ;

int answer = power( a ,b) ;
cout << " answer is " << answer << endl;

int c , d ;
cin >> c >> d ;

int answer1 = power( c ,d) ;
cout << " answer is " << answer1 << endl;
return 0;

int ans = power ();
cout << " answer is " << ans << endl;

int ans1 = power ();
cout << " answer is " << ans1 << endl;

int ans2 = power ();
cout << " answer is " << ans2 << endl;

return 0;


}

//AP

#include<iostream>
using namespace std ;

 
int AP(int n ) {
    int AP = 3*n + 7 ;
    return AP;
}

int main () {
    int n ;
    cin>>n;

    int ans = AP(n) ;
    cout << " answer is :" << ans << endl;
    return 0;
}

// total setbits of a and b 

#include<iostream>
using namespace std ;

int setBitsA ( int a ) {
    int count = 0 ;
    while (a!=0) {
        if (a&1) {
            count++;
        }
        a = a >> 1;
    }
    return count ;
}

int setBitsB ( int b ) {
    int count = 0 ;
    while (b!=0) {
        if (b&1) {
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main () {
    int a , b ;
    cin >> a >> b ;

    int ans1 = setBitsA(a);
    int ans2 = setBitsB(b);
    cout << "set bits of A : " << ans1 << endl;
    cout << " set bits of B : " << ans2 << endl;
    int ans = ans1 + ans2;

    cout << " total set bits of A and B are : " << ans << endl;

    return 0;
}

// fibonacci series 

#include<iostream>
using namespace std ;

int fibonacci(int n) 
{
  int a = 0;
  int b = 1;
  for (int i = 2 ; i<n ; i++){
    int next = a + b ;
    a = b;
    b = next ;
  }
  return b;
}

int main () {
    int n ;
    cin>>n;

    cout << " the "<<n<<"th term of the series :"<< fibonacci(n) << endl;

    return 0;

}
*/