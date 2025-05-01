/*

#include<iostream>
using namespace std ;

int main() {
    
    char ch = '1' ;
    int num = 1 ;

    cout << endl;
    switch( ch ) {

        case 1: cout << "first " << endl;
        cout << " first again" <<endl;
                break;

        case '1': switch(num) {
                     case 1: cout << " value of num is " << num << endl;
                     break;
        }
        break;

        default : cout << " it is default case" << endl;        
    }
    cout << endl;

while (1)
{
    cout << "how you doin????" << endl;
    int num = 1;
    switch(num)
    {
        case 1: cout << " I AM FINE" << endl;
        break;
    }
    exit(0);
}

}
*/

// ARRAY SCOPE 

#include<iostream>
using namespace std ;

void update(int arr[] , int n ) {

    cout << endl << " inside the function" << endl;

    arr[0] = 120;
    
    for (int i = 0 ; i<3 ; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;


    cout << " going back to main function" << endl;
}
int main() {

    int arr[3] = { 1,2,3};

    update(arr , 3);


    cout << endl << "printing the main function" << endl;
    for (int i = 0 ; i <3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}