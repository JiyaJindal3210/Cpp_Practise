/*
#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char level;


    Hero(){
        cout << "Constructor called " << endl;
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

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

    //static allocation
    //creation of object
    // Hero h1;
    // cout << "h1 health is " << h1.getHealth() << endl;
    // h1.health = 70;
    // h1.level = 'A';
    // h1.setLevel('B');
    // h1.setHealth(80);
    // // cout << "size:" << sizeof(h1) << endl;
    // cout << h1.getHealth() << endl;
    // cout << h1.level << endl;

    //dynamically
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(70);
    // cout << " Level is : " << (*b).level << endl;
    // cout << " Health is : " << (*b).getHealth() << endl;
    // cout << " Level is : " << b->level << endl;
    // cout << " Health is : " << b->getHealth() << endl;

    // Hero h1; // will give error as the default constructor will not be called as we have already
    // created parametrised constructor and there is no default constructor 

    //object created statically
    Hero Ramesh(10,'A');
    // cout << "Address of ramesh " << &Ramesh << endl;
    Ramesh.print();

    //dynamically
    Hero *h = new Hero(11,'C');
    // Hero *h = new Hero();
    h->print();

    Hero temp(22, 'B');
    temp.print();

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char level;


    Hero(){
        cout << "Simple Constructor called " << endl;
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor 
    Hero(Hero& temp){
        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "level : " << this->level << endl;
        cout << "health : " << this->health << endl;
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

    Hero S(70,'C');
    S.print();

    // copy constructor
    Hero R(S);
    R.print();

    // R.health = suresh.health;
    // R.level = suresh.level;

}
*/

/*
#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char *name;
    char level;


    Hero(){
        cout << "Simple Constructor called " << endl;
        name = new char[100];
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor 
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "health : " << this->health << " , ";
        cout << "level : " << this->level << " ] ";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){

    Hero h1;
    h1.setHealth(12);
    h1.setLevel('D');
    char name[7] = "Babbar";
    h1.setName(name);

    // h1.print();

    //use default copy constructor
    Hero h2(h1);
    // cout << "Second hero : " << endl;
    // h2.print();
    // Hero h2 = h1;

    h1.name[0] = 'G';
    h1.print();
    h2.print();  


    // h1 = h2;
    // h1.print();
    // h2.print();  

}
*/

/*
#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char *name;
    char level;


    Hero(){
        cout << "Simple Constructor called " << endl;
        name = new char[100];
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor 
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "health : " << this->health << " , ";
        cout << "level : " << this->level << " ] ";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int main(){

    //static
    Hero a;

    // dynamically -> destructor not called automatically
    // manualyy destructor called
    Hero *b = new Hero();
    delete b;


    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char *name;
    char level;
    // static members - need to start by using static keyword
    static int timeToComplete;


    Hero(){
        cout << "Simple Constructor called " << endl;
        name = new char[100];
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor 
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "health : " << this->health << " , ";
        cout << "level : " << this->level << " ] ";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

// static members needs to be called outside the class
int Hero::timeToComplete = 5; //::-> are the scope resolution operator

int main(){

    // static members -> most preffered to be assessed by this using className 
    // but can be accessed by making objects
    cout << Hero::timeToComplete << endl;

    // this is not the preffered way as static members
    // are not related to objects 
    // these are related to classes only
    Hero a;
    cout << a.timeToComplete << endl;


    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    
}
*/


#include <iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;
    
    public:
    char *name;
    char level;
    // static members - need to start by using static keyword
    static int timeToComplete;


    Hero(){
        cout << "Simple Constructor called " << endl;
        name = new char[100];
    }

    //paramerterised constructor 
    Hero(int health){
        // cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health , char level ) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor 
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "health : " << this->health << " , ";
        cout << "level : " << this->level << " ] ";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

// static members needs to be called outside the class
int Hero::timeToComplete = 5; //::-> are the scope resolution operator

int main(){

    // static functions can only access the static members 
    cout << Hero::random() << endl;
    
}
