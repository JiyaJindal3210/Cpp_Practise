// stream is for flow of data
// ios is a library/module - it is input output flow (stream)
// ostream - output stream

// ios have 2 child - 1. ostream
                //    2. istream

// fstream inlcudes ifstream , ofstream 

// File Handling - The process to work with file (reading and writing the file)
/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    // writing the file
    ofstream fout("data.txt",ios::app); // opened the file for writing
    // ios::app - it is used that when we create a txt file the data gets added by not changing  
    fout << "Hello Everyone!"; // writing Hello World to the data.txt file
    fout << "\nHello Everyone!";
    fout << "\nHello Everyone!";
    fout << "\nHello Everyone!";
    fout.close(); // it is imp to close a file
 

}
*/

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
// in ifstream data comes in form of a token 
    ifstream fin("data.txt");
    string data1;
    string data2;
    string data3;
    // fin >> data; // it will take one token at a time
    // getline(fin,data1); // will give one line at a time
    // getline(fin,data2);
    // getline(fin,data3);
    // cout << data1 << endl;
    // cout << data2 << endl;
    // cout << data3 << endl;

    // it is better to use loop rather than calling/writing it 100 times

    while(!fin.eof()){
        string data;
        getline(fin, data);
        cout << data << endl;
    }

    fin.close();

}
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("user.txt",ios::app);
    string name;
    cout << "Enter your name : ";
    cin >> name;
    fout << "Your name is : " << name<<"\n" ;

    fout.close();
}