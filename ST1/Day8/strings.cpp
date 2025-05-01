#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    //Strings: It is set of characters (numbers+letters+Special symbols + white space) enclosed with double quotation marks(" ")

    //Note: String keeps most important data.

    // string name = "Champak";
    // string fatherName = "Chaman Lal";
    // string adhaarNumber = "23455642876532";
    // string pancardNumber = "254657329876";
    // string accountNumber = "2346543246362344";
    // string password = "Champak@123";
    // string Email = "champak12@gmail.com";
    // string pinCode = "201301";
    // string address = "Noida sector 73 , Uttar Pradesh";
    // string msg = "Hello , How are you";
    // string favCharacter = "C";

    //Note : in string we can use string using two ways :
    //1. c-style string
    //2. c++-style string

    // These are following common things in the both type of strings:
    // 1. they follow 0 based indexing like array, meaning that first character inside the string will start with 0 and second with 1 and so on .
    // 2. string is by defalt mutable(changable)


    //1. c-style string: null charcter(/0) terminated string

    // Declaration:
    /*
    
    Syntax 1:
    char stringName[] = "value";

    Syntax 2:
    char stringName[size] = "value";
    char stringName[size] = {'P','a'};

    */
//    char name[] = "Jiya";
//    cout << name << endl;

//    char name[6] = {'J','i','y','a'};
//    cout << name << endl;
    // cout << name[0] << endl;

    //Mutablility : you can also update the characters inside the strings.

    // cout << name[0] << endl;
    // name[0] = 'T';
    // cout << name[0] << endl;
    // cout << name << endl;

    //Note : as string carries very imp data therefore as a developer its our task to make it immutable 
    // solution - using const keyword 

    // const char name[6] = {'J','i','y','a'};
    // name[0] = 'T';
    // cout << name << endl; // error


// How to use loop for above kind of string
// we have lot of methods of string but to include them we need to use cstring

    // cout<<strlen(name)<<endl;

    // for(int i=0;i<strlen(name);i++){

    //     cout<<i;

    // }

    //C++ style string :

    /*
        syntax : 
        string stringName = "value";
    
    */

   //Example:
//    string str = "Hello world";
//    cout << str << endl;

//    str[0] = 'B'; //when using const this operation is not allowed
//    cout << str << endl;

    // string name = "Jiya";
    // cout << name << endl;

    //How to find out the length/size of given string: size() length()

    // cout << name.length() << endl;
    // cout << name.size() << endl;

    // for(int i=0;i<name.size();i++){
    //     cout << name[i] << " ";
    // }

    //take input in the form of string:

    // string msg;
    // cout << "Enter your msg:";
    // getline(cin,msg);
    // cout << msg << endl;


    //Student Task : Create a string as 'sentence' and take input from user and perform following operation:
    //1. find out the length of small case letter without using any inbuilt function
    //2. find out the even index letter and print there

    // string sentence;
    // cout << "Enter your sentence : " ;
    // getline(cin , sentence);

    //Way 1: ascii

    // int lowerCaseLetterCount = 0;
    // for(int i=0;i<sentence.size();i++){

    //     if (sentence[i] >= 97 && sentence[i] <= 122){
    //         lowerCaseLetterCount++;
    //     }

    // }
    // cout << lowerCaseLetterCount << endl;


    //Way 2: 

    // string lowerCaseLetter = "abcdefghijklmnopqrstuvwxyz";
    // int lowerCaseLetterCount = 0;

    // for(int i=0;i<sentence.size();i++){
    //     for(int j=0;j<lowerCaseLetter.size();j++){
    //         if(sentence[i]==lowerCaseLetter[j]){
    //             lowerCaseLetterCount++;
    //         }
    //     }
    // }
    // cout << lowerCaseLetterCount ;

    
    // task : string given 
    // const string str = "Mintu";
    //output: Pintu

    // string name = str;
    // name[0] = 'P';
    // cout << name << endl;

    //explore some inbuilt methods of string class:
    //append()
    // string str = "Hello";
    // str.append(" World ");
    // cout << str;    

    

    





}