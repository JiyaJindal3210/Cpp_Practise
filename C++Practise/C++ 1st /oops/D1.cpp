#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


};

int main(){

    //creation of object
    Hero h1;
    cout << "h1 health is " << h1.getHealth() << endl;
    // h1.health = 70;
    h1.level = 'A';
    h1.setHealth(70);
    
    // cout << "size:" << sizeof(h1) << endl;
    cout << h1.getHealth() << endl;
    cout << h1.level << endl;

    return 0;

}