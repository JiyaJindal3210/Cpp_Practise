#include <iostream>
#include <cmath>
using namespace std;
class TrafficLight{
    public:
    int north,south,east,west;
    static int vehicle_count;
    TrafficLight(int n,int s,int e,int w):north(n),south(s),east(e),west(w){
        vehicle_count=vehicle_count+north+south+west+east;
    }
    void display(){
        int total=north+south+west+east;
        float x=north*1.00/total*60;
        float y=south*1.00/total*60;
        float z=east*1.00/total*60;
        float m=west*1.00/total*60;

        x=round(x);
        y=round(y);
        z=round(z);
        m=round(m);
        if (north==south && south==east && east==west){
            x=y=z=m=15;
        }
        cout<<"North: "<<x<<" sec, South: "<<y<<" sec,East: "<<z<<" sec, West: "<<m<<" sec"<<endl;
        vehicle_count=0;
    }
   
};
int TrafficLight::vehicle_count=0;
int main(){
    int north,south,east,west;
    cin>>north>>south>>east>>west;
    TrafficLight traffic(north,south,east,west);
    traffic.display();
}





#include <iostream>
using namespace std;
class Currency{
    protected:
    int rupees,paise;
    public:
    Currency(int r,int p):rupees(r),paise(p){

    }
    Currency(){};
    void display(){
        cout<<"Rs "<<rupees<<"."<<paise<<endl;
    }
    Currency operator+(Currency obj){
        Currency c3;
        int total=(rupees*100+paise)+(obj.rupees*100+obj.paise);
        c3.rupees=total/100;
        c3.paise=total%100;
        return c3;
    }

};
int main(){
    int r1,p1,r2,p2;
    cin>>r1>>p1>>r2>>p2;
    Currency c1(r1,p1);
    Currency c2(r2,p2);
    c1.display();
    c2.display();
    Currency c3=c1+c2;
    c3.display();
}