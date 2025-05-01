/* 
//------------------- 1 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 2 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 3 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    int count = 1;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 4 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }      
    
}
*/

/*
//------------------- 5 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }    
}
*/

/*
//------------------- 6 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    int count = 1;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }    
}
*/

/*
//------------------- 7 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i-j+1 << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 8 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    
    cin >> n;

    for(int i=1;i<=n;i++){
        char ch = 'A'+i-1;
        for(int j=1;j<=n;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 9 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+j-1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 10 --------------------------

#include <iostream>
using namespace std;

int main(){

    int n;
    char ch = 'A';
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 11 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+i+j-2;
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 12 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        char ch = 'A'+i-1;
        for(int j=1;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 13 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    char ch = 'A';

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 14 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'A'+i+j-2;
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 15 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        char ch = 'A'+n-i;
        for(int j=1;j<=i;j++){
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 16 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+i+j-2;
            cout << ch << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 17 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int space=n-i;space>0;space--){
            cout << " ";
        }

        for(int j=1;j<=i;j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 18 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
*/

/*
//------------------- 19 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}
*/

/*
//------------------- 20 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout << " ";
        }

        for(int j=1;j<=n-i+1;j++){
            cout << i ;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 21 --------------------------

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
            cout << i ;
        }
        cout << endl;
    }
}
*/

/*
//------------------- 22 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int k=1;k<i;k++){
            cout << " ";
        }

        for(int j=i;j<=n;j++){
            cout << j ;
        }
        cout << endl;
    }

}
*/

/*
//------------------- 22 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    int count = 1;
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int k=1;k<n-i+1;k++){
            cout << " ";
        }

        for(int j=1;j<=i;j++){
            cout << count ;
            count++;
        }
        cout << endl;
    }

}
*/

/*
//------------------- 23 --------------------------

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
//------------------- 24 --------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i+1;j++){
            cout << j;
        }

        for(int k=i-1;k>0;k--){
            cout << "*";
        }

        for(int m=i-1;m>0;m--){
            cout << "*";
        }

        for(int a = n - i + 1; a >= 1; a--){
            cout << a ;
        }

        cout << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

int main() {

    int a = 5;
    int *p = &a;

    print(p);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int getSum(int *arr,int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
    
}

int main() {

    int arr[5] = {1,2,3,4,5};

    cout << "Sum is : " << getSum(arr,5) << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int getSum(int *arr,int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    cout << "Sum is : " << getSum(arr+2,3) << endl;

    return 0;
}
*/

#include <iostream>
#include <string>


using namespace std;


class Employee {
private:
    string name, company;
    int age; // Encapsulated data members


public:
    // Constructor
    Employee(string na, string com, int a) {
        name = na;
        company = com;
        age = a;
    }


    // Getters and Setters
    void setName(string na) { name = na; }
    string getName() const { return name; }


    void setCompany(string com) { company = com; }
    string getCompany() const { return company; }


    void setAge(int a) {
        if (a >= 18) age = a; // Validation
    }
    int getAge() const { return age; }


    // Method to introduce Employee
    void introduceYourself() const {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Employee e2("N1", "Hi", 56);
	// e2.age=90; // Invalid age, won't update
    e2.setAge(9); 
    cout << e2.getName() << " is of age " << e2.getAge() << endl;
    e2.introduceYourself(); // Display full details
}
