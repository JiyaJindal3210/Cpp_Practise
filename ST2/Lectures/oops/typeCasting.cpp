// type conversion with respect to primitive to class type and vice versa.

// 1. basic(primitive) to class type (using constructor function)
// #include <iostream>
// using namespace std;

// class Number{
//     int value;
//     public:
//     Number(int v){
//         value=v;
//     }

//     int getValue(){
//         return value;
//     }
// };


// int main(){

//     int num =4.5; // it is primitive variable 
//     Number obj =num; //object variable as obj - Implicit Conversion

// }




// 2. CLass type to primitive type: (using contructor or conversion function)
// using conversion function
// #include <iostream>
// using namespace std;

// class Number{
//     int value;
//     public:
//     Number(int x){value=x;}

//     operator int(){return value;}

// };
// int main(){
//     Number obj=50;
//     int num =obj;
//     cout << "Converted value: " <<num << endl;
//     return 0;
// }




// 3. class type to another class type conversion - using conversion function
// #include <iostream>
// using namespace std;

// class Square{
//     int side;
//     public:
//     Square(int s){side = s;}
//     int getSide(){return side;}
// };

// class Rectangle{
//     int width, height;
//     public:
//     Rectangle(int w, int h): width(w), height(h){}

//     operator Square(){
//         return Square(min(width,height));
//     }
// };

// int main(){
//     Rectangle rect(10,6);
//     Square sq=rect;
//     cout << 
// }






// Student task
// #include <iostream>
// using namespace std;

// class Student{
//     int marks;
//     public:
//     Student(int m){
//         marks=m;
//     }

//     void display(){
//         cout<< marks << endl;
//     }
// };

// int main(){

//     Student s1 = 85; 
//     s1.display();
// }



// #include <iostream>
// using namespace std;

// class Student{
//     int marks;
//     public:
//     Student(int x){marks=x;}

//     operator int(){return marks;}

// };
// int main(){
//     Student s2=50;
//     int totalMarks = s2;
//     cout << "Total marks: " << totalMarks << endl;
//     return 0;
// }



#include <iostream>
using namespace std;

class Grade{
    char grade;
    public:
    Grade(char g){
        grade = g;
    }
    char getGrade(){
        return grade;
    }
};

class Student{
    int marks;
    public:
    Student(int x){marks=x;}

    operator Grade(){
        if(marks>=90) return Grade('A');
        else if(marks>=80) return Grade('B');
        else if(marks>=70) return Grade('C');
        else if(marks>=60) return Grade('D');
        else return Grade('F');
    }
};

int main(){
    Student student(60);
    Grade g= student;
    cout << g.getGrade() << endl; 
}