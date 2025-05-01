 // while loop
 // ḍo while loop
 // for loop
 // range(enhance loop)

// #include<iostream>
// using namespace std;
// int main(){
//     // while loop
//     // print hello 10 times
//     // syntax
//     // while(condition){
//     // block of code if the condition is true
//     // }

//     // to stop the loop
//     // starting point = Initialization
//     // ending point = condition
//     // steps/jumps = updation

//     // Example :print hello 10 times
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<"Hello"<<endl;
//         i++;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sp=1;
//     while(sp<=10){
//         cout<<"Hello "<<sp++<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num=12345;
//     int num1;
//     while(num>0){
//         num1=num%10;
//         num=num/10;
//         cout<<num1<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     int sum=0;
//     int n1;
//     while(n>0){
//         n1=n%10;
//         n=n/10;
//         count+=1;
//         sum=sum+n1;
        
//     }
//         cout<<count<<endl;
//         cout<<sum;
// }

// do while loop

// it does not check the condition for first iteration it starts checking condition second iteration or second round onwards

// print 1 - 10 in one line

// int sp =1;
// do{
//     cout<<sp<<" ";
//     sp++;
// }
// while(sp<=10);

// For loop

// when to use = when number of iterations are known
// (start,end,steps)

// syntax
// for(initialization/startingPoint/steps)

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<"Hello"<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
        cout<<"Sum of even numbers: "<<sum;

}