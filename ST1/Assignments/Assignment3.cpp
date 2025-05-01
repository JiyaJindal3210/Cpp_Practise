/*
#include <iostream>
using namespace std;

int main() {

    int n , sum=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        
        sum = sum + i;
        
    }
    cout << sum << endl;
    
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n , factorial=1;
    cin >> n;

    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    cout << factorial << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n, revn=0;
    cin >> n;

    while(n!=0){
        int digit = n%10;
        revn = revn*10 + digit;
        n /= 10;
    }
    cout << revn << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n , count=0 ;
    cin >> n;

    while(n!=0){
        int digit = n%10;
        n /=10;
        count++;
       
    }
    cout << count << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=10;i++){

        cout << n*i << endl;

    }
    
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n, divisorCount = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;  
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisorCount++;  
        }
    }

    if (divisorCount == 2) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n , sum=0 ;
    cin >> n;
    while(n!=0){

        int digit = n%10;
        n /= 10;
        sum += digit;

    }
    cout << sum << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int x,y;
    cin >> x >> y;
    int hcf=1;
    int smaller;
    if(x>y){
        smaller = y;}
    else if(y>x){
        smaller=x;
    }
        
        for(int i=1;i<=smaller;i++){
            if((x%i==0) && (y%i==0)){
                hcf = i;
            }
        }
        cout << hcf << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int a=0 , b=1;
    int n;
    cin >> n;
    for(int i=1;i<=n; i++){
        cout << a << " ";
        int c = a+b;
        a=b;
        b=c;
    }
    cout << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int temp = n;
    int reversedn = 0;

    while(temp!=0){

        int digit = temp%10;
        reversedn = reversedn*10 + digit;
        temp /= 10;

    }
    if(reversedn == n){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0;i<=n;i++){
        if(i%2==0){
            cout << i << endl;
        }
    }
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {

    string S;
    cout << "enter a string: ";
    getline(cin, S);

    int vowelCount = 0;

    for(char c : S){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            vowelCount++;
        }
    }
    cout << vowelCount << endl;
    
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int num ,largest=0;
    cin >> num;
    int digit;

    while(num!=0){

        digit = num%10;
        if(digit>largest){
            largest=digit;
        }
        num /= 10;

    }
    cout << largest << endl;
    
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;
    int temp;
    int sum = 0,count=0;
    int digit;

    temp=n;

    while(temp!=0){
        temp /= 10;
        count++;
    }

    temp = n;

    while(temp!=0){
        digit = temp%10;
        sum += pow(digit,count);
        temp /= 10;

    }

    if(sum == n){
        cout << "Armstrong" << endl;
    }
    else{
        cout << "Not Armstrong" << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n ,sum=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum += i;
        }
    }
    cout << sum << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int largest = (x > y) ? x : y;

    while (true) {
        if (largest % x == 0 && largest % y == 0) {
            cout << "LCM: " << largest << endl;
            break;  
        }
        largest++;  
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int n, count=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    cout << count << endl;
}
*/



