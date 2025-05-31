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