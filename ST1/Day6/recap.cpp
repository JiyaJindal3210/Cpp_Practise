/*
#include <iostream>
using namespace std;

int main() {

    //
    // 5 4 3 2 1 
    // 5 4 3 2
    // 5 4 3 
    // 5 4
    // 5


    for (int i = 5; i >= 1; i--) {  
        for (int j = 5; j >= 6 - i; j--) {  
            cout << j << " ";
        }
        cout << endl;  
    }


    
}



// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; i++) {  
        for (int space = 0; space < i; space++) {
            cout << "  ";  
        }

        for (int j = 5; j > i; j--) {
            cout << j << " ";
        }

        cout << endl; 
    }
}


// 1 2 3 4 5
// 2 4 6 8 10
// 3 6 9 12 15
// 4 8 12 16 20
// 5 10 15 20 25

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {  
        for (int j = 1; j <= 5; j++) {  
            cout << i * j << " ";  
        }
        cout << endl;  
    }
}


// nested loop : when each iteration/round of any loop is connected to set of iterations/rounds.repeated code then in this case we need another loop inside a loop.


// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=5 ; j++) {
            cout <<  j << " ";
        }
    cout << endl;
    }
}


// 1
// 1 2
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=i ; j++) {
            cout << j << " ";
        }
    cout << endl;
    }
}


// **********
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// **********

#include <iostream>
using namespace std;

int main() {

    for(int i=1 ; i<=10 ; i++){
        for(int j=1 ; j<=10 ; j++) {
            if(i==1 || i==10 || j==1 || j==10 ){
                cout << "*" ;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
*/





