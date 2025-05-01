#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void addStudent(){
    int id;
    string name , city;

    cout << "Enter Unique Student Id: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin,name);

    cout << "Enter Student City: ";
    getline(cin,city);

    //opened the file with writing mode
    ofstream file("student.txt",ios::app);

    if(!file.is_open()){
        cout << "Something went wrong while opening the file" << endl;
    }
    file << id << "," << name << "," << city << "\n";
    file.close();
    cout << "Student has added successfully.." << endl;
}



void getStudentById(){
    int id;
    cout << "Enter Student Id:";
    cin >> id;

    ifstream file("student.txt");
    string line;
    while(getline(file, line)){
        stringstream ss(line);
        string studentId, studentName, studentCity;
        getline(ss, studentId , ',');
        
        if(stoi(studentId)==id){
            getline(ss,studentName,',');
            getline(ss,studentCity,',');
            cout << "Student Id: " << studentId << "Student Name: " << studentName << "Student City: " << studentCity << endl;
            return;
        }
        
    }
    cout << "Invalid Student Id , please try again!" << endl;
    file.close();

}




void updateStudentById(){
    int id;
    string name , city;

    cout << "Enter Unique Student Id: ";
    cin >> id;


    vector<string> students;
    ifstream file("student.txt");

    string line;
    while(getline(file,line)){
        students.push_back(line);
    }
    file.close();

    ofstream addFile("student.txt");
    bool found = false;
    for(auto &student: students){
        stringstream ss(student);
        string studentId;
        getline(ss,studentId,',');
        if(stoi(studentId)==id){
            found = true;
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin,name);

            cout << "Enter Student City: ";
            getline(cin,city);
            addFile << id << "," << name << "," << city << "\n";
            
        }
        else{
            addFile << student << "\n";
        }
    }
    if(found){
        cout << "Student with Id " << id << "has updated successfully.." << endl;
    }
    else{
        cout << "Invalid student ID , please try again.." << endl;
    }
    addFile.close();
}



void deleteStudentById(){
    int id;
    string name , city;

    cout << "Enter Unique Student Id: ";
    cin >> id;


    vector<string> students;
    ifstream file("student.txt");

    string line;
    while(getline(file,line)){
        students.push_back(line);
    }
    file.close();

    ofstream addFile("student.txt");
    bool found = false;

    for(auto &student: students){
        stringstream ss(student);
        string studentId;
        getline(ss,studentId,',');
        if(stoi(studentId)!=id){
            addFile << student << "\n";
            
        }
        else{
            found = true;
        }
    }
    if(found){
        cout << "Student with Id " << id << "has deleted successfully.." << endl;
    }
    else{
        cout << "Invalid student ID , please try again.." << endl;
    }
    addFile.close();
}

int main() {
    
    bool isRunning = true;
    while(true){
        cout << "1. Add Student" << endl;
        cout << "2. Get Student By Id" << endl;
        cout << "3. Update Student By Id" << endl;
        cout << "4. Delete Student By Id" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choices: ";
        int choice;
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                getStudentById();
                break;
            case 3:
                updateStudentById();
                break;
            case 4:
                deleteStudentById();
                break;
            case 5:
                cout << "Do you want to exit (y/n)?: ";
                char res;
                cin >> res;
                if(res=='y' || res=='Y'){
                    isRunning = false;
                    cout << "Thank you for using the application" << endl;
                    return 0;
                }
                break;
            default:
                cout << "Invalid input please try again" << endl;
                break;
        }
    }

}