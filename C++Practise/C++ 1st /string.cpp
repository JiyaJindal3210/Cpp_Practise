/*
#include<iostream>
using namespace std ;

char GetMaxOccCharacter(string s) {

    int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {

        char ch = s[i];
        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            number = ch -'a';
        }
        else { //uppercase
            number = ch -'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans =0;
    for(int i=0;i<26 ; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' +ans;
    return finalAns;
}

int main( ) {
    
    string s;
    cin >> s;

    cout << GetMaxOccCharacter(s) << endl;

}
// time complexity = O(n);
// space complexity = O(1);

#include  <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline (cin, s);

    int start = 0;
    int p = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[p] == ' ' || s[p] == '\0')
        {
            int end = p - 1;
            while (start <= end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            start=p+1;
        }
        p++;
    }
    cout<<s;
}
*/

#include  <iostream>
#include <string.h>
using namespace std;

string replaceSpaces (string & str) {
    int l = str.length();
    string rep = "@40";
    for(int i=0 ; i<l; i++) {

        if(str[i] == ' ') {
            str.replace(i,1,rep);
        }
    }  
    return str;  
}
int main() {
    string str;
    getline (cin , str);
    cout << replaceSpaces(str) << endl;
}
    

