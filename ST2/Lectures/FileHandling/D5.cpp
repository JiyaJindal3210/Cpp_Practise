// C++ Type Conversion :

// 1. static_cast : complile time type conversion
// 2. dynamic_cast : run time conversion
// 3. const_cast : remove the const qualifier to modify the data
// 4. reinterpret_cast : low level programming/binary files


// 1. static_cast :

/*
#include <iostream>
using namespace std;

int main() {

    // basic(primitive ) type converison example
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    //find the ascii value of character :

    // int asciiValue = (int)ch; // c-style casting
    // cout << asciiValue << endl;

    // int asciiValue = int(ch); // function-style casting
    int asciiValue = static_cast<int>(ch); // C++ style casting
    cout << asciiValue << endl;



    return 0;
}
*/


// 
/*
#include <iostream>
#include <vector>
using namespace std;

class Animal {
    public:
    virtual void sound(){
        cout << "Animal sounds" << endl;
    }

};

class Dog : public Animal {
    public:
    void sound(){
        cout << "Dog Barks" << endl;
    }
    void fetch(){
        cout << "Dog is fetching something" << endl;
    }
};

class Cat : public Animal {
    public:
    void sound(){
        cout << "Cat meows" << endl;
    }
    void fetch(){
        cout << "cat is fetching something" << endl;
    }
};

void identifyAnimal(Animal *animal){
    Dog *dog = dynamic_cast<Dog*>(animal);
    if(dog){
        cout << "This is dog" <<endl;
        dog->sound();
        dog->fetch();
        return;
    }

    Cat *cat = dynamic_cast<Cat*>(animal);
    if(cat){
        cout << "This is cat" <<endl;
        cat->sound();
        cat->fetch();
        return;
    }

    cout << "Unknown Animal" << endl;
}

int main() {


    // Animal *animal;
    // Dog *dog = new Dog();
    // animal = static_cast<Animal*>(dog);
    // // animal->sound();
    // dog->fetch();
    // dog->sound();

    // Animal *animal = new Animal();
    // Dog *dog = static_cast<Dog*>(animal);

    // dog->fetch();
    // dog->sound();

    // NOTE : static_cast gives undefined behavior at run time


    // Animal *animal = new Animal();
    // Dog *dog = dynamic_cast<Dog*>(animal);

    // if(!dog){
    //     cout << "This is not Dog Object" << endl;
    //     return 0;
    // }

    // dog->fetch();
    // dog->sound();
  //  // This is not Dog Object

    // Animal *animal = new Dog();
    // Dog *dog = dynamic_cast<Dog*>(animal);

    // if(!dog){
    //     cout << "This is not Dog Object" << endl;
    //     return 0;
    // }

    // dog->fetch();
    // dog->sound();
    //Dog is fetching something
    // Dog Barks


    vector<Animal*> animals = {new Dog(), new Cat(), new Animal()};

    for(Animal* animal : animals){
        identifyAnimal(animal);
    }

    
}
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}