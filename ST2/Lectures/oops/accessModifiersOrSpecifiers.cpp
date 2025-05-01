/*
#include <iostream>
using namespace std;

class A{
    private:
    string name = "Chaman";

    string getName(){
        return name;
    }

    protected:
    int age = 45;

    public:
    string city = "Noida";

    // void showDetails(){
    //     age;
    //     city;
    //     name;
    //     getName();
    // }
    // friend void show(A a); // declaration of friend function
    friend class Dost;
    

};

// Implementation of friend function
// void show(A a){
//     cout << a.name << endl; //private member
//     cout << a.age << endl; // protected member
//     cout << a.city << endl; // public member
// }

//friend function/class - They can access the private and protected members of the class
class Dost{
    public:
    void getDetails(A a){
        cout << a.name << endl; //private member
        cout << a.age << endl; // protected member
        cout << a.city << endl;
    }
};

int main() {
    //access modifier/Specifier: they decide accessibility or visibilty of class members.
    // 1. public 2. private 3. protected
    // Note : if you don't define any access modifier for particular member 
    //inside the class then they would be by default private.

    //public: accessible everywhere - Members under public block are accessible everywhere , inside the class and outside the class.
    //private: not accessible everywhere - Members under private block are accessible only within the class not outside the class.
    //protected : not accessible everywhere - leaving child class - Members under protected block are accessible within the class and inside the child class.(Inheritance)

    // A a;
    // cout << a.city << endl;
    // cout << a.age << endl; // not accessible because protected

    //if we want to access the private and protected members of the class?
    //Solution: friend function/class

    // Example : Friend function

    // A a;
    // show(a);

    //Example : Friend class
    A a;
    Dost d;
    d.getDetails(a);

}
*/

/*
#include <iostream>
using namespace std;

class B; // declared a class B but not given defination/body
class C;

class A{
    private:
    int age = 45;
    public:
    friend void show(A a, B b, C c);
};

class B{
    private:
    string city = "Delhi";
    public:
    friend void show(A a, B b, C c);
};

class C{
    private:
    string name = "Jiya";
    public:
    friend void show(A a , B b , C c);
};


void show(A a, B b, C c){
    cout << a.age << endl;
    cout << b.city << endl;
    cout << c.name << endl;
}





int main() {
    A a;
    B b;
    C c;
    show(a,b,c);
    
}
*/

#include <iostream>
using namespace std;

class A{
    private:
    int age = 45;
    public:
    friend class Dost;
    
};

class B{
    private:
    string city = "Delhi";
    public:
    friend class Dost;
};

class Dost{
    public:
    void show(A a, B b){
        cout << a.age << endl;
        cout << b.city << endl;
    }
};

int main() {
    A a;
    B b;
    Dost d;
    d.show(a,b);
}
