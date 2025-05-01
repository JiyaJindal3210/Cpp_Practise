/*
#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class SmartDevice {
protected:
    string deviceID;
public:
    SmartDevice(string id) : deviceID(id) {}
    virtual void displayInfo() = 0;
    virtual ~SmartDevice() {}
};

// SmartLight class
class SmartLight : public SmartDevice {
    int brightnessLevel;
public:
    SmartLight(string deviceId, int bl) : SmartDevice(deviceId), brightnessLevel(bl) {}
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Brightness Level: " << brightnessLevel << "%" << endl;
    }
};

// SmartLock class
class SmartLock : public SmartDevice {
    string lockStatus;
public:
    SmartLock(string deviceId, string status) : SmartDevice(deviceId), lockStatus(status) {}
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Lock Status: " << lockStatus << endl;
    }
};

// SmartThermostat class
class SmartThermostat : public SmartDevice {
    int currentTemperature;
public:
    SmartThermostat(string deviceId, int temp) : SmartDevice(deviceId), currentTemperature(temp) {}
    void displayInfo() override {
        cout << "Smart Device Details:" << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Current Temperature: " << currentTemperature << "°C" << endl;
    }
};

int main() {
    int N;
    cin >> N;
    SmartDevice** devices = new SmartDevice*[N];

    for (int i = 0; i < N; i++) {
        string type, id;
        cin >> type >> id;

        if (type == "Light") {
            int brightness;
            cin >> brightness;
            devices[i] = new SmartLight(id, brightness);
        } else if (type == "Lock") {
            string status;
            cin >> status;
            devices[i] = new SmartLock(id, status);
        } else if (type == "Thermostat") {
            int temp;
            cin >> temp;
            devices[i] = new SmartThermostat(id, temp);
        }
    }

    for (int i = 0; i < N; i++) {
        devices[i]->displayInfo();
    }

    for (int i = 0; i < N; i++) {
        delete devices[i];
    }
    delete[] devices;

    return 0;
}
*/


// Problem 2 :

/*
#include <iostream>
using namespace std;

class Robot {
    protected:
    string model_name;
    int weight;
    public:
    Robot(string mn , int w) : model_name(mn),weight(w){};
    
};

class Functionality : virtual public Robot {
    protected:
    string task_type;
    public:
    Functionality(string mn , int w , string tt) : Robot(model_name , weight) , task_type(tt){};

};

class EnergySource : virtual public Robot {
    protected:
    string energy_type;
    public:
    EnergySource(string mn , int w , string et) : Robot(model_name , weight) , energy_type(et){};

};

class SmartRobot : public Functionality , EnergySource {
    protected:
    string AI_enabled;
    public:
    SmartRobot(string mn, int w, string tt, string et, string ai)
        : Robot(mn, w), Functionality(mn, w, tt), EnergySource(mn, w, et), AI_enabled(ai) {}
    void display(){
        cout << "Smart Robot Details: " << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Task Type: " << task_type << endl;
        cout << "Energy Source: " << energy_type << endl;
        cout << "AI Enabled: " << AI_enabled << endl;
    }
};


int main() {
    int N;
    cin >> N;

    SmartRobot* robots[100];
    for (int i = 0; i < N; i++) {
        string model, task, energy , ai;
        int weight;
        cin >> model >> weight >> task >> energy >> ai;
        robots[i] = new SmartRobot(model, weight, task, energy, ai);
    }

    for (int i = 0; i < N; i++) {
        robots[i]->display();
    }

    for (int i = 0; i < N; i++) {
        delete robots[i];
    }

}
*/

// Problem 3 : 

/*
#include <iostream>
using namespace std;

class Appliance {
    protected:
    string brand;
    int power;
    public:
    Appliance(string b , int p) : brand(b),power(p){};
};

class WiredDevice : virtual public Appliance {
    protected:
    int voltage;
    public:
    WiredDevice(string b , int p , int v) : Appliance(brand , power) , voltage(v){};
};

class WirelessDevice : virtual public Appliance {
    protected:
    string network_type;
    public:
    WirelessDevice(string b , int p ,string nt) : Appliance(brand , power) , network_type(nt){};
};

class SmartAppliance : public WiredDevice , WirelessDevice {
    public:

    SmartAppliance(string b , int p , int v , string nt) : Appliance(b,p) , WiredDevice(b,p,v) , WirelessDevice(b,p,nt){};


    void display(){
        cout << "Smart Appliance Details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << " W" << endl;
        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Network Type: " << network_type << endl;
    }
};

int main() {
    int N;
    cin >> N;

    SmartAppliance* devices[100];

    for(int i=0;i<N;i++){
        string brand;
        int power,voltage;
        string network_type;
        cin >> brand >> power >> voltage >> network_type;
        devices[i] = new SmartAppliance(brand,power,voltage,network_type);
    }

    for(int i=0;i<N;i++){
        devices[i]->display();
    }

    for(int i=0;i<N;i++){
        delete devices[i];
    }

    return 0;
}
*/

// Problem 4 : 

/*
#include <iostream>
#include <string>
using namespace std;

class Payment {
    protected:
    string TransactionID;
    public:
    Payment(string id) : TransactionID(id){}; 
    virtual void processPayment() = 0;
};

class CreditCard : public Payment {
    protected:
    int cardNo;
    public:
    CreditCard(string id,int cn) : Payment(id) , cardNo(cn){};
    void processPayment()override{
        cout << "Payment Details: " << endl;
        cout << "Transaction ID: " << TransactionID << endl;
        cout << "Credit Card Last 4 Digits: " << cardNo << endl;
    }
};

class DigitalWallet : public Payment {
    protected:
    string walletProvider;
    public:
    DigitalWallet(string id,string wp) : Payment(id) , walletProvider(wp){};
    void processPayment()override{
        cout << "Payment Details: " << endl;
        cout << "Transaction ID: " << TransactionID << endl;
        cout << "Digital Wallet Provider: " << walletProvider << endl;
    }
};

class UPI : public Payment {
    protected:
    string UpiID;
    public:
    UPI(string id,string ui) : Payment(id) , UpiID(ui){};
    void processPayment()override{
        cout << "Payment Details: " << endl;
        cout << "Transaction ID: " << TransactionID << endl;
        cout << "UPI ID: " << UpiID << endl;
    }
};


int main() {
    int N;
    cin >> N;

    Payment* payments[N];

    for(int i=0;i<N;i++){
        string payment_type, transactionID;
        cin >> payment_type >> transactionID;

        if(payment_type=="CreditCard"){
            int cardNo;
            cin >> cardNo;
            payments[i] = new CreditCard(transactionID,cardNo);
        }
        else if(payment_type=="DigitalWallet"){
            string walleetProvider;
            cin >> walleetProvider;
            payments[i] = new DigitalWallet(transactionID,walleetProvider);
        }
        else{
            string UpiID;
            cin >> UpiID;
            payments[i] = new UPI(transactionID,UpiID);
        }
    }

    for(int i=0;i<N;i++){
        payments[i]->processPayment();
    }

    
    return 0;
}
*/

// Problem 5 : 
/*
#include <iostream>
using namespace std;

class Vehicle {

    protected:
    int mileage;

    public:
    Vehicle(int m) : mileage(m){};
    virtual void display() = 0;
};

class Car : public Vehicle { 

    protected:
    string model;
    int fuel_capacity;
    int seating_capacity;

    public:
    Car(string md,int fc,int m,int sc) : Vehicle(m) , model(md) , fuel_capacity(fc) , seating_capacity(sc){};
    void display()override{
        cout << "Vehicle Type: Car" << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel Capacity: " << fuel_capacity << " L" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << endl;
    }
};

class Bike : public Vehicle {
    protected:
    string model;
    int engine_capacity;
    string type;
    
    public:
    Bike(string md,int ec,int m,string t) : Vehicle(m), model(md) , engine_capacity(ec) , type(t){};

    void display()override{
        cout << "Vehicle Type: Bike" << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engine_capacity << " cc" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Type: " << type << endl;
        cout << endl;
    }

};

int main() {
    int N;
    cin >> N;

    Vehicle* vehicles[N];

    for(int i=0;i<N;i++){
        string vehicle_type,model;
        int mileage;
        cin >> vehicle_type >> model;
        if(vehicle_type=="car"){
            int fuel_capacity;
            int seating_capacity;
            cin >> fuel_capacity >> mileage >> seating_capacity;
            vehicles[i] = new Car(model,fuel_capacity,mileage,seating_capacity);
        }
        else if(vehicle_type=="bike"){
            int engine_capacity;
            string type;
            cin >> engine_capacity >> mileage >> type ;
            vehicles[i] = new Bike(model,engine_capacity,mileage,type);
        }
    }

    for(int i=0;i<N;i++){
        vehicles[i]->display();
    }

    return 0;
}
*/

// Problem 6 : 
/*
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

class Shape {
    public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    protected:
    double height , width;
    public:
    Rectangle(double h,double w) : height(h) , width(w){};
    double area() const override {
        return height*width;
    }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

class Circle : public Shape {
    protected:
    double radius;
    public:
    Circle(double r) : radius(r){};
    double area() const override {
        return M_PI*radius*radius;
    }
    double getRadius() const { return radius; }
};

class Colored {
    protected:
    string color;
    public:
    Colored(const string& c) : color(c){};
    string getColor() const { return color; }
};

class ColoredRectangle : public Rectangle , Colored {
    public:
    ColoredRectangle(double h,double w,const string& c) : Rectangle(h,w) , Colored(c) {};
    void display() const {
        cout << "Shape: Rectangle, Color: " << getColor() << endl;
        cout << "Width: " << getWidth() << ", Height: " << getHeight() << endl;
        cout << "Area: " << fixed << setprecision(2) << area() << endl;
    }
};

class ColoredCircle : public Circle , Colored {
    public:
    ColoredCircle(double r,const string& c) : Circle(r) , Colored(c) {};
    void display() const {
        cout << "Shape: Circle, Color: " << getColor() << endl;
        cout << "Radius: " << getRadius() << endl;
        cout << "Area: " << fixed << setprecision(2) << area() << endl;
    }
};


int main() {
    int N;
    cin >> N;

    vector<Shape*> shapes;

    for(int i=0;i<N;i++){
        string type;
        cin >> type;
        if(type=="rectangle"){
            double height,width;
            string color;
            cin >> width >> height >> color;
            auto* rect = new ColoredRectangle(height,width,color);
            rect->display();
            shapes.push_back(rect);
        }
        else if(type=="circle"){
            double radius;
            string color;
            cin >> radius >> color;
            auto* circ = new ColoredCircle(radius,color);
            circ->display();
            shapes.push_back(circ);
        }
    }

    for (auto shape : shapes) {
        delete shape;
    }
    

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Appliance {
    protected:
    string model;
    public:
    Appliance(string m) : model(m){};
    virtual void display() = 0;
}; 

class WashingMachine : public Appliance {
    protected:
    int drumSize , washModes , spinSpeed;
    public:
    WashingMachine(string m,int ds,int wm,int ss) : Appliance(m) , drumSize(ds) , washModes(wm) , spinSpeed(ss){};
    void display() override {
        cout << "Appliance Type: Washing Machine" << endl;
        cout << "Model: " << model << endl;
        cout << "Drum Size: " << drumSize << " kg" << endl;
        cout << "Wash Modes: " << washModes << endl;
        cout << "Spin Speed: " << spinSpeed << " RPM" << endl;
        cout << endl;
    }

};

class Refrigerator : public Appliance {
    protected:
    int capacity;
    string doorType;
    int energyRating;
    
    public:
    Refrigerator(string m,int c,string dt,int er) : Appliance(m) , capacity(c) , doorType(dt) , energyRating(er){};
    void display() override{
        cout << "Appliance Type: Refrigerator" << endl;
        cout << "Model: " << model << endl;
        cout << "Capacity: " << capacity << " L" << endl;
        cout << "Door Type: " << doorType << endl;
        cout << "Energy Rating: " << energyRating << " stars" << endl;
        cout << endl;
    }
};

int main() {
   int N;
   cin >> N;

   Appliance* appliances[N];

   for(int i=0;i<N;i++){
        string type;
        cin >> type;
        if(type=="washing_machine"){
            string model;
            int drumSize,washModes,spinSpeed;
            cin >> model >> drumSize >> washModes >> spinSpeed;
            appliances[i] = new WashingMachine(model,drumSize,washModes,spinSpeed);
        }

        else if(type=="refrigerator"){
            string model;
            int capacity ;
            string doorType;
            int energyRating;
            cin >> model >> capacity >> doorType >> energyRating;
            appliances[i] = new Refrigerator(model,capacity,doorType,energyRating);
        }
   }

   for(int i=0;i<N;i++){
    appliances[i]->display();
   }
}
*/

// Problem 9 : 

/*
#include <iostream>
using namespace std;

class Gadgets {
    protected:
    string model;
    public:
    Gadgets(string m) : model(m) {};
    virtual void display() = 0;
};

class Laptop : public Gadgets {
    protected:
    int ram_size;
    int storage_size;
    int battery_backup;
    public:
    Laptop(string m,int rs,int ss,int bb) : Gadgets(m) , ram_size(rs) , storage_size(ss) , battery_backup(bb){};
    void display()override{
        cout << "Gadget Type: Laptop" << endl;
        cout << "Model: " << model << endl;
        cout << "RAM Size: " << ram_size << " GB" << endl;
        cout << "Storage: " << storage_size << " GB" << endl;
        cout << "Battery Backup: " << battery_backup << " hours" << endl << endl;
    }
};

class SmartPhone : public Gadgets {
    protected:
    int camera_megapixel;
    int screen_size;
    int battery_capacity;
    public:
    SmartPhone(string m,int cmp , int srs , int bc) : Gadgets(m) , camera_megapixel(cmp) , screen_size(srs) , battery_capacity(bc){};
    void display()override{
        cout << "Gadget Type: Smartphone" << endl;
        cout << "Model: " << model << endl;
        cout << "Camera: " << camera_megapixel << " MP" << endl;
        cout << "Screen Size: " << screen_size << " inches" << endl;
        cout << "Battery Capacity: " << battery_capacity << " mAh" << endl << endl;
    }

};

int main() {
    int N;
    cin >> N;

    Gadgets** gadget = new Gadgets*[N];

    for(int i=0;i<N;i++){
        string type;
        cin>>type;

        if(type=="laptop"){
            string model;int ram_size;int storage_size;int battery_backup;
            cin >> model >> ram_size >> storage_size >> battery_backup;
            gadget[i] = new Laptop(model,ram_size,storage_size,battery_backup);
        }
        else if(type=="smartphone"){
            string model;int camera_megapixel;int screen_size;int battery_capacity;
            cin >> model >> camera_megapixel >> screen_size >> battery_capacity;
            gadget[i] = new SmartPhone(model,camera_megapixel,screen_size,battery_capacity);
        }
    }

    for(int i=0;i<N;i++){
        gadget[i]->display();
    }

    for(int i=0;i<N;i++){
        delete gadget[i];
    }

    delete[] gadget;
    return 0;
}
*/

// Problem 10 : 

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Course {
protected:
    string title;
    int duration;
public:
    Course(string t, int d) : title(t), duration(d) {}
    virtual void display() = 0;
    virtual ~Course() {}
};

// Derived Class for Online Course
class OnlineCourse : public Course {
    string platform;
public:
    OnlineCourse(string t, int d, string p) : Course(t, d), platform(p) {}
    void display() override {
        cout << "Online Course: " << title << ", Duration: " << duration << " weeks, Platform: " << platform << endl;
    }
};

// Derived Class for Offline Course
class OfflineCourse : public Course {
    string location, room_number;
public:
    OfflineCourse(string t, int d, string loc, string room) : Course(t, d), location(loc), room_number(room) {}
    void display() override {
        cout << "Offline Course: " << title << ", Duration: " << duration << " weeks, Location: " << location << ", Room: " << room_number << endl;
    }
};

int main() {
    int N;
    cin >> N;

    Course* courses[100];  // as N ≤ 100

    for (int i = 0; i < N; ++i) {
        string type;
        cin >> type;

        if (type == "online") {
            string title, platform;
            int duration;
            cin >> title >> duration >> platform;
            courses[i] = new OnlineCourse(title, duration, platform);
        } else if (type == "offline") {
            string title, location, room;
            int duration;
            cin >> title >> duration >> location >> room;
            courses[i] = new OfflineCourse(title, duration, location, room);
        }
    }

    for (int i = 0; i < N; ++i) {
        courses[i]->display();
        delete courses[i];
    }

    return 0;
}
