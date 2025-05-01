/*
#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout << "Your roll number is : " << roll_no << endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths , physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout << "Your result is here : " << endl
                 << "Maths : " << maths << endl
                 << "Physics : " << physics << endl;
        }
};

class Sports : virtual public Student {
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout << "Score is : " << score << endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "Total : " << total << endl;
        }
};

int main() {
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9,87.5);
    harry.set_score(9);
    harry.display();
    
    return 0;
}
*/

// POINTERS TO DERIVED CLASSES :

/*
#include <iostream>
using namespace std;

class BaseClass {
    public:
        int var_base;
        void display(){
            cout << "Displaying Base class variable var_base " << var_base << endl;
        }

};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
        void display(){
            cout << "Displaying Base class variable var_base " << var_base << endl;
            cout << "Displaying Derived class variable var_derived " << var_derived << endl;
          
        }
};

int main() {
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->display();

    // even if i point a base class pointer to a derived class pointer which is a inherited class of
    // a base class then if i want to acess the display function through base class pointer
    // then it will show the display function of base class only not the display function
    // of derived class this is called LATE BINDING

    // base_class_pointer->var_derived = 134; // will throw an error

    DerivedClass * derived_class_pointer;
    derived_class_pointer  = &obj_derived;
    derived_class_pointer->var_derived = 98;
    // derived_class_pointer->display();
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->display();


// Displaying Base class variable var_base 9448
// Displaying Derived class variable var_derived 98
    return 0;
}
*/



// VIRTUAL FUNCTIONS : 

/*
#include <iostream>
using namespace std;

class BaseClass {
    public:
        int var_base = 1;
        virtual void display(){
            cout << "1. Displaying Base class variable var_base " << var_base << endl;
        }

};

class DerivedClass : public BaseClass {
    public:
        int var_derived = 2;
        void display(){
            cout << "2. Displaying Base class variable var_base " << var_base << endl;
            cout << "2. Displaying Derived class variable var_derived " << var_derived << endl;
          
        }
};

int main() {

    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();



    return 0;
}
*/

/*
#include <iostream>
#include <cstring>
using namespace std;

class CWH {
    protected:
        string title;
        float rating;
    
        public:
            CWH(string s , float r){
                title = s;
                rating = r;
            }
            virtual void display(){}
};

class CWHVideo : public CWH {
    
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }

        void display(){
            cout << "This is an amazing video with title " << title << endl;
            cout << "Ratings: " << rating << " out of 5 stars " << endl;
            cout << "Length of this video is : " << videoLength << " minutes" << endl;
        }

};

class CWHText : public CWH {
    
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }

        void display(){
            cout << "This is an amazing text tutorial with title " << title << endl;
            cout << "Ratings of this text tutorial: " << rating << " out of 5 stars " << endl;
            cout << "No of words in this text tutorial is : " << words << " words" << endl;
        }

};

int main() {
    string title;
    float rating , vlen;
    int words;

    // for Code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title , rating , vlen);
    // djVideo.display();


    // for Code with harry text 
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title , rating , words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}
*/

// Rules for virtual functions :
/*

1. they cannot be static
2. they are accessed by object pointers
3. virtual functions can be a friend of another class
4. a virtual function in base class might not be used
5. if a virtual function defined in the base class , there is no necessity of redifining it in the derived class

*/

// PURE VIRTUAL FUNCTION / ABSTRACT CLASS

#include <iostream>
#include <cstring>
using namespace std;

class CWH {
    protected:
        string title;
        float rating;
    
        public:
            CWH(string s , float r){
                title = s;
                rating = r;
            }
            virtual void display() = 0; // do-nothing function --> pure virtual function
};

class CWHVideo : public CWH {
    
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }

        void display(){
            cout << "This is an amazing video with title " << title << endl;
            cout << "Ratings: " << rating << " out of 5 stars " << endl;
            cout << "Length of this video is : " << videoLength << " minutes" << endl << endl;
        }

};

class CWHText : public CWH {
    
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }

        void display(){
            cout << "This is an amazing text tutorial with title " << title << endl;
            cout << "Ratings of this text tutorial: " << rating << " out of 5 stars " << endl;
            cout << "No of words in this text tutorial is : " << words << " words" << endl << endl;
        }

};

int main() {
    string title;
    float rating , vlen;
    int words;

    // for Code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title , rating , vlen);
    // djVideo.display();


    // for Code with harry text 
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title , rating , words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}
