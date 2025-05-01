/*
#include <iostream>
#include <string>
using namespace std;


int main() {

    string a;
    getline(cin,a);
    string b = "";

    for(int i=a.size()-1;i>=0;i--){
        b += a[i];
    }
    cout << b << endl;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

string revString(string a){
    string b="";
    for(int i=a.size()-1;i>=0;i--){
        b += a[i];
    }
    return b;
}


int main() {

    string a;
    getline(cin,a);
    
    if(a == revString(a)){
        cout << "Yes, it is a palindrome" << endl;
    }
    else{
        cout << "No, it is not a palindrome" << endl;
    }
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    int vowelCount = 0, consonantCount = 0;
    string vowels = "aeiouAEIOU";

    for (int i = 0; i < a.size(); i++) {
        char ch = a[i];
        if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z')){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++;
            } 
            else if (isalpha(ch)) {  
                consonantCount++;
            }
        }
    }

    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;

    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int maxcount = 0;
    char FrequentChar = ' ';

    for (int i = 0; i < a.size(); i++) {
        int count = 0;
        for(int j=0;j<a.size();j++){
            if(a[i]==a[j] && a[i]!=' '){
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            FrequentChar = a[i];
        }
    }

    cout << "Most frequent character: " << FrequentChar << endl;

}
*/

/*
#include <iostream>
using namespace std;

void removeDuplicates(char str[]) {
    int length = 0;
    while (str[length] != ' ') length++; // Find length of the string

    int index = 0; // Index for placing unique characters

    for (int i = 0; i < length; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])  // Check if character appeared before
                break;
        }
        if (j == i)  // If not found before, add to new position
            str[index++] = str[i];
    }
    
    str[index] = '\0';  // Terminate the new string
}

int main() {
    char str[100];  // Declare a character array
    cout << "Enter a string: ";
    cin >> str;

    removeDuplicates(str);
    
    cout << "String after removing duplicates: " << str << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int maxcount = 0;

    for(int i=0;i<a.size();i++){
        int count = 0;
        for(int j=0;j<a.size();j++){
            if(a[i]==a[j] && a[i]!=' '){
                count++;
            }
        }
        if(count==1){
            cout << "First non-repeating character: " << a[i] << endl;
            break;
        }
    }
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    if (str.length() > 0) {
        str[0] = toupper(str[0]);
    }
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout<<str<<endl;

}
*/


/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    return a == b;
}

int main() {

    string a;
    getline(cin, a);
    string b;
    getline(cin,b);

    if(areAnagrams(a,b)){
        cout << "Yes, they are anagrams" << endl;
    }
    else{
        cout << "No, they are not anagrams" << endl;
    }
}
*/

/*
#include <iostream>
#include <cctype>  // For isdigit function
using namespace std;

bool isOnlyDigits(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;  // Return false if any character is not a digit
        }
    }
    return true;  // Return true if all characters are digits
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isOnlyDigits(str)) {
        cout << "The string contains only digits." << endl;
    } else {
        cout << "The string contains non-digit characters." << endl;
    }

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

bool isValidCharacter(char ch){
    return (ch>='A'&& ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9');
}

int main() {

    string str;
    getline(cin, str);  

    string currentWord = "",longestWord = "";
    
    for(int i=0;i<str.length();i++){
        char currentChar = str[i];

        if(isValidCharacter(currentChar)){
            currentWord += currentChar;
        }
        
        else{
            if(currentWord.length()>longestWord.length()){
                longestWord = currentWord;
            }
            currentWord="";
        }
    }

    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;

}
*/

/*
#include <iostream>
using namespace std;

int main(){

    string a;
    getline(cin,a);

    int count = 1;
    cout << "Frequency: " << endl;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {
            count++;  
        } 
        else {
            cout << a[i - 1] << ": " << count <<  endl;
            count = 1; 
        }
    }
    
    cout << a[a.size() - 1] << ": " << count <<  endl;

    return 0;
}
*/


// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool isRotate(string a,string Rotated){
//     if (a.length()!=Rotated.length()){
//         return false;
//     }
//     sort(a.begin(),a.end());
//     sort(Rotated.begin(),Rotated.end());

//     return a==Rotated;
// }
// int main() {

//     string a;
//     getline(cin,a);

//     string Rotated;
//     getline(cin,Rotated);

//     if(isRotate(a,Rotated)){
//         cout << "Yes, it is a rotation" << endl;
//     }
//     else{
//         cout << "No, it is not a rotation" << endl;
//     }
// }


/*
#include <iostream>
using namespace std;

bool isSubstring(string str1, string str2) {
    int n = str1.length();
    int m = str2.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == m) {
            return true;
        }
    }
    return false;
}

bool isRotation(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string temp = str1 + str1; // Concatenate str1 with itself
    return isSubstring(temp, str2); // Check if str2 is a substring of temp
}

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (isRotation(str1, str2)) {
        cout << "Yes, it is a rotation." << endl;
    } else {
        cout << "No, it is not a rotation." << endl;
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void findSubstrings(string str){
    for(int i=0;i<str.length();i++){
        string temp="";
        for(int j=i;j<str.length();j++){
            temp += str[j];
            cout << temp << ", " ;
        }
    }
}

int main(){
    string str;
    cin >> str;
    findSubstrings(str);

    return 0;
}
*/