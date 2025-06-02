// DESCENDING ORDER

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
*/

// DNA STORAGE

/*
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){

        int N;
        string s;
        cin >> N >> s;

        for(int i=0;i<N;i+=2){
            string pair = s.substr(i,2);
            if(pair == "00") cout << 'A';
            else if(pair == "01") cout << 'T';
            else if(pair == "10") cout << 'C';
            else if(pair == "11") cout << 'G';
        }
        cout << endl;

    }
    
}
*/

// #include <iostream>
// #include <cmath>
// using namespace std;

// class TrafficLight{
//     public:
//     int north,south,west,east;
//     static int vehicle_count;
//     TrafficLight(int n, int s,int e,int w):north(n),south(s),east(e),west(w){
//         vehicle_count=vehicle_count+north+south+east+west;
//     }
//     void display(){
//         int total = north+south+west+east;
//         float x = north*1.00/total*60;
//         float y = south*1.00/total*60;
//         float z = east*1.00/total*60;
//         float w = west*1.00/total*60;

//         x=round(x);
//         y=round(y);
//         z=round(z);
//         w=round(w);

//         if(north==south && south==west && east==west){
//             x=y=z=w=15;
//         }

//         cout<<"North: "<<x<<" sec, South: "<<y<<" sec,East: "<<z<<" sec, West: "<<w<<" sec"<<endl;
//         vehicle_count=0;

//     }
// };

// int TrafficLight::vehicle_count=0;

// int main() {
//     int T;
//     cin >> T;
//     while(T--){
//     int north,south,east,west;
//     cin >> north>>south>>east>>west;
//     TrafficLight traffic(north,south,east,west);
//     traffic.display();
//     }
// }

/*
#include <iostream>
#include <iomanip>
using namespace std;

class Currency {
protected:
    int rupees, paise;
public:
    Currency(int r, int p) : rupees(r), paise(p) {}
    Currency() {}

    void display(int count) {
        cout << fixed << setprecision(2);
        float value = rupees + paise / 100.0;
        cout << "Currency" << count << ": Rs " << value << endl;
    }

    Currency operator+(Currency obj) {
        Currency c3;
        int total = (rupees * 100 + paise) + (obj.rupees * 100 + obj.paise);
        c3.rupees = total / 100;
        c3.paise = total % 100;
        return c3;
    }

    void displaySum() {
        cout << fixed << setprecision(2);
        float value = rupees + paise / 100.0;
        cout << "Sum: Rs " << value << endl;
    }
};

int main() {
    int r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;

    Currency c1(r1, p1);
    Currency c2(r2, p2);
    Currency c3 = c1 + c2;

    c1.display(1);
    c2.display(2);
    c3.displaySum();

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    char ch = '#';
    int freq[100] = {0};

    for(int i=0;i<str.length();i++){
        int count = 1;
        if(str[i] == ch) {
            continue;
        }
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
                str[j] = ch;
            }
        }
        freq[i] = count;
    }

    for(int i=0;i<str.length();i++){
        if(str[i]!=ch){
            cout << str[i];
        }
    }
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int mid = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[mid++] = arr[i];
        }
    }
    while(mid<n){
        arr[mid++] = 0;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(i==j){
                sum1 += arr[i][j];
            }
        }

        for(int j=n-1;j>=0;j--){
            if(i==j){
                sum2 += arr[i][j];
            }
        }
    }

    int difference = sum2-sum1;
    cout << difference << endl;

    
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
    protected:
    string deviceID;
    public:
    SmartDevice(string id) : deviceID(id){};
    virtual void displayInfo() = 0;
    virtual ~SmartDevice() {};
};

class SmartLight : public SmartDevice {
    protected:
    int brightness;
    public:
    SmartLight(string id,int bl) : SmartDevice(deviceID) , brightness(bl){};
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Brightness Level: " << brightness << "%" << endl;
    }
};

class SmartLock : public SmartDevice {
    protected:
    string lockStatus;
    public:
    SmartLock(string id,string lock) : SmartDevice(deviceID) , lockStatus(lock){};
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Lock Status: " << lockStatus << endl;
    }
};

class SmartThermostat : public SmartDevice {
    protected:
    int temperature;
    public:
    SmartThermostat(string id , int temp) : SmartDevice(deviceID) , temperature(temp) {};
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Temperature: " << temperature << endl;
    }
};

int main() {
    int N;
    cin >> N;
    SmartDevice** devices = new SmartDevice*[N];

    for(int i=0;i<N;i++){
        string type,id;
        cin >> type >> id;
        if(type=="Light"||type=="light"){
            int brightness;
            cin >> brightness;
            devices[i] = new SmartLight(id,brightness);
        }
        else if (type == "Lock") {
            string status;
            cin >> status;
            devices[i] = new SmartLock(id, status);
        } else if (type == "Thermostat") {
            int temp;
            cin >> temp;
            devices[i] = new SmartThermostat(id, temp);
        }
    }

    for(int i=0;i<N;i++){
        devices[i]->displayInfo();
    }
    for (int i = 0; i < N; i++) {
        delete devices[i];
    }
    delete[] devices;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N];
        int freq[100]={0};
        for(int i=0;i<N;i++){
            cin >> arr[i];
        }
        bool found = false;

        for(int i=0;i<N;i++){
            int count = 1;
            for(int j=i+1;j<N;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            freq[i] = count;

            if(count>=(N/2)){
                cout << arr[i];
                found = true;
                break;
            }
            
            
        }
        
        if (!found) {
            cout << -1 << endl;
        }

    }
    
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,q;
    cin >> N >> q;
    vector<int> arr(N),prefix(N);

    for(int i=0;i<N;i++){
        cin >> arr[i];
        prefix[i] = arr[i] + (i>0 ? prefix[i-1] : 0);
    }

    while(q--){
        int k;
        cin >> k;
        cout << prefix[k] << endl;
    }

}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    for(int i=K+1;i<N;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<=K;i++){
        cout << arr[i] << " ";
    }
}
*/


/*
#include <iostream>
using namespace std;

class Complex {
    protected:
    int real , imag;
    public:
    Complex(){};
    Complex(int r , int i) : real(r) , imag(i){};

    void display(){
        cout << real << " + " << imag << "i " ;
    }

    Complex operator+(Complex obj){
        Complex c3;
        c3.real = this->real + obj.real;
        c3.imag = this->imag + obj.imag;
        return c3;
    }

};

int main() {
    Complex c1(2,3);
    Complex c2(3,5);
    Complex c3;
    c3 = c1+c2;
    c3.display();
    
}
*/

// #include <iostream>
// using namespace std;

// class Time12;

// class Time24 {
//     private:
//         int hours , minutes;
//     public:
//         Time24(int h , int m){
//             hours = h;
//             minutes = m;
//         }

//         void display() {
//             cout << hours << ":" << minutes << " (24-hour format)" << endl;
//         }

//         operator Time12();
// };

// class Time12 {
//     private:
//         int hours , minutes;
//         string period;
//     public:
//         Time12(int h , int m , string p){
//             hours = h;
//             minutes = m;
//             period = p;
//         }

//         void display() {
//             cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << period << endl;
//         }

// };

// Time24::operator Time12(){
//     int h12;
//     string p;

//     if(hours==0){
//         h12 = 12;
//         p = "AM";
//     }
//     else if(hours==12){
//         h12 = 12;
//         p = "PM";
//     }
//     else if(hours>12){
//         h12 = hours - 12;
//         p = "PM";
//     }
//     else {
//         h12 = hours;
//         p = "AM";
//     }

//     return Time12(h12, minutes, p);
// }


// int main() {
//     int h, m;
//     cin >> h >> m;

//     Time24 t24(h, m);  
//     Time12 t12 = t24;   

//     t12.display();      

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Time {
//     protected:
//     int hours , minutes;
//     public:

//     friend istream& operator>>(istream& in , Time& obj){
//         in >> obj.hours >> obj.minutes;
//         return in;
//     }

//     friend ostream& operator<<(ostream& out , Time& obj){
//         int h = obj.hours;
//         int m = obj.minutes;
//         string suffix = "AM";
//         if(h==0){
//             h=12;
//             suffix = "AM";
//         }
//         else if(h==12){
//             h=12;
//             suffix = "PM";
//         }
//         else if(h>12){
//             h-=12;
//             suffix = "PM";
//         }
//         else{
//             h=h;
//             suffix="AM";
//         }

//         out << h << ":" << (m<10 ? "0" : "") << m << " " << suffix << endl;
//         return out;
//     }
// };

// int main() {
//     Time t;
//     cin >> t;
//     cout << t;
// }

/*
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void multiplyArray(const vector<vector<int>>& A , const vector<vector<int>>& B , vector<vector<int>>& result , int row , int k , int c ){
    for(int j=0;j<c;j++){
        result[row][j] = 0;
        for(int m=0;m<k;m++){
            result[row][j] += A[row][m] * B[m][j];
        }
    }
}

int main() {
    int T;
    cin >> T;

    while(T--){
        int r1,k,c;
        cin >> r1 >> k >> c;

        vector<vector<int>> A(r1,vector<int>(k));
        vector<vector<int>> B(k,vector<int>(c));
        vector<vector<int>> result(r1,vector<int>(c,0));

        for(int i=0;i<r1;i++){
            for(int j=0;j<k;j++){
                cin >> A[i][j];
            }
        }

        for(int i=0;i<k;i++){
            for(int j=0;j<c;j++){
                cin >> B[i][j];
            }
        }

        vector<thread> threads;
        for(int i=0;i<r1;i++){
            threads.push_back(thread(multiplyArray,cref(A),cref(B),ref(result),i,k,c));
        }

        for(auto&t : threads){
            t.join();
        }

        cout << "Result:\n";
        for (const auto &row : result)
        {
            for (int val : row)
                cout << val << " ";
            cout << endl;
        }
    }
}
*/

/*
#include <iostream>
using namespace std;

class Distance {
    protected:
    int feetd , inchd;
    public:
    Distance(){};
    Distance(int fd , int id) : feetd(fd) , inchd(id){};

    void getData() {
        cin >> feetd >> inchd;
    }

    void display(const string& label){
        int count = 0;
        cout << label << ":[" << feetd << "'" << inchd << "\"]" << endl;
    }

    Distance& operator+(Distance obj){
        Distance result;
        result.feetd = this->feetd + obj.feetd;
        result.inchd = this->inchd + obj.inchd;
        if (result.inchd >= 12) {
            result.feetd += result.inchd / 12;
            result.inchd %= 12;
        }

        return result;
    }
};

int main() {
    
    Distance d1, d2, d3;

    d1.getData();  
    d2.getData();  

    d3 = d1 + d2;

    d1.display("Distance1");
    d2.display("Distance2");
    d3.display("Resultant Distance");

    
    return 0;
    
}
*/

/*
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& word){
    string reversed = word;
    reverse(reversed.begin(),reversed.end());
    return word == reversed;
}

int main() {
    string sentence;
    getline(cin,sentence);

    stringstream ss(sentence);
    string word;
    int count = 0;

    while(ss >> word){
        if(isPalindrome(word)){
            count++;
        }
    }

    cout << count << endl;
}
*/

