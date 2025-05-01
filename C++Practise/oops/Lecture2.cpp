/*
#include <iostream>
using namespace std;

class Student {

    private:
        string name;
        int age ;
        int height;

    public:
    int getAge(){
        return this-> age;
    }
};

int main(){
    // encapsulation -> is the wrapping up the data members and fucntions 
    // fully encapsulated class -> all data members are private
    //private :
    //    int num;
    //    string level;

    // why?
    // -> Information hiding / Data Hiding - Security increases
    // -> if we want , we can make class -> "Read only"
    // -> Code Reusability
    // -> Encapsulation -> Unit testing

    Student first;
    cout << "Okk hai sb" << endl;

    return 0;

}
*/

/*
#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    }
};

// syntax of inheritance : 
// class childClassName : mode presentClass
// childClassName -> this is the class which you can say is the child of the parent class that you want to inherit 
// mode -> these are the modes in which you want the child class to be 
// mode -> public , private , protected
// presentClass -> this is the parent class of which you want to make a class that will be its child class


class Male: public Human {

    public:
    string color;
    void sleep(){
        cout << "Male sleeping" << endl;
    }
};

// private data members of any class cannot be inherited
// Super class        sub class ->

// private            public -> not accessible
// private            protected -> not accessible
// private            private -> not accessible

// public               public -> public
// public               protected -> protected
// public               private -> private

// protected            public -> protected
// protected            protected -> protected
// protected            private -> private

// public < protected < private


int main() {
    
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(62);
    cout << object1.weight << endl;
    object1.sleep();



    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Human{
    protected:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    }
};

class Male: public Human {

    public:
    string color;
    void sleep(){
        cout << "Male sleeping" << endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main(){

    Male m1;
    // cout << m1.age << " ";
    cout << m1.getHeight() << endl;
    
    // cout << m1.weight << " ";


}
*/
