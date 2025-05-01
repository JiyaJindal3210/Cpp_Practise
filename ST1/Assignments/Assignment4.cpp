/*
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int k=1;k<n-i+1;k++){
            cout << " ";
        }

        for(int j=1;j<=i;j++){
            cout << j;
        }

        for(int m=i-1;m>0;m--){
            cout << m ;
        }
        cout << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if ((i+j)%2 == 0) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int upper;

    cout << "Enter upper bound: ";
    cin >> upper;

    cout << "Prime numbers between " << "1" << " and " << upper << " are: ";

    for (int num = 1; num <= upper; num++) {  
        if (num < 2) continue; 
        
        bool isPrime = true;

        for (int i = 2; i < num; i++) {  
            if (num % i == 0) {
                isPrime = false;  
                break;
            }
        }

        if (isPrime)
            cout << num << " ";  
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int upper;
    cin >> upper;

    for(int i=1;i<=upper;i++){
        int sumDivisors = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                sumDivisors += i;
            }
        }
        cout << "Sum of divisors of " << i << " = " << sumDivisors << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        
        for(int spaces=1;spaces<=n-i;spaces++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int m=i-1;m>0;m--){
            cout << "*" ;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {

        for(int spaces=1;spaces<=n-i;spaces++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int m=i-1;m>0;m--){
            cout << "*" ;
        }
        cout << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
*/


