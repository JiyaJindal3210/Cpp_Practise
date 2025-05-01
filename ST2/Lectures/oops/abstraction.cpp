// Abstraction : 

// process of hiding internal implementation details and showing only essential features to the user
// i.e. show what is necessary , hide the complexity
// you can achieve abstarction using abstract class (atleast one pure virtual function )
// abstract class : it is similar to other class but you can't create the object of that class is known as abstract class

/*
#include <iostream>
using namespace std;

class Shape {
    public:
    virtual void area() = 0; // pure virtual function
};

class Circle : public Shape {
    int radius;
    public:
    Circle(int r) : radius(r) {}
    void area() override {
        cout << "Area of circle : " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    int length , breadth;
    public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    void area() override {
        cout << "Area of rectangle : " << length * breadth << endl;
    }
};

int main() {
    Shape* s; 

    Circle c(5);
    Rectangle r(4,6);

    s = &c;
    s->area();

    s = &r;
    s->area();

}
*/

#include <iostream>
using namespace std;

class CourierService {
    public:
    virtual void startDelivery() {
        cout << "Your delivery has been started " << endl;
    }
};

class BlueDart : public CourierService{
    void startDelivery() override{
        cout << "Packing the parcel, scanning, dispatching via air cargo." << endl;
    }
};

class Delhivery : public CourierService {
    void startDelivery() override{
        cout << "Packing the parcel, assigning to nearest hub , dispatching." << endl;
    }
};

class IndiaPost : public CourierService{
    void startDelivery() override{
        cout << "Packing the parcel, sending to the postal sorting center, dispatching." << endl;
    }
};


int main() {
    CourierService *c;
    BlueDart b;
    Delhivery d;
    IndiaPost i;

    c = &b;
    c->startDelivery();

    c = &d;
    c->startDelivery();

    c = &i;
    c->startDelivery();



}
