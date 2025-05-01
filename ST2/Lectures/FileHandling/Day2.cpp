// More about FILE HANDLING:
/*
student task :- create a file named student.txt and add some student details(rollNumber , name city) dynamically
// make sure to take input for each student from the user
*/

// #include <iostream>
// #include<fstream>
// using namespace std;

// int main() {

//     ofstream fout("student.txt",ios::app);
//     int roll;
//     string name;
//     string city;
//     cout<<"Enter Student Roll Number: ";
//     cin>>roll;
//     cout<<"Enter Student Name: ";
//     cin>>name;
//     cout<<"Enter Student City: ";
//     cin>>city;
//     fout<<roll<<","<<name<<","<<city<<endl;

//     fout.close();
    
// }

// #include <iostream>
// #include <fstream>
// #include <sstream> 
// using namespace std;

// void addStudent() {
//     int roll;
//     string name, city;

//     cout << "Enter Student Roll number: ";
//     cin >> roll;
//     cin.ignore(); 
//     cout << "Enter student name: ";
//     getline(cin, name);

//     cout << "Enter student City: ";
//     getline(cin, city);

    
//     ofstream fout("student.txt", ios::app);
//     if (!fout) {
//         cout << "Error opening file!" << endl;
//         return;
//     }

//     fout << roll << "," << name << "," << city << "\n";
//     fout.close();

//     cout << "Student added successfully!\n";
// }

// void getStudent_by_id() {
//     int roll;
//     cout << "Enter the Student Roll number: ";
//     cin >> roll;

//     ifstream fin("student.txt");
//     if (!fin) {
//         cout << "Error opening file!" << endl;
//         return;
//     }

//     string line;
//     bool found = false;

//     while (getline(fin, line)) {
//         stringstream ss(line);
//         string sroll, name, city;

//         getline(ss, sroll, ','); 
//         getline(ss, name, ',');  
//         getline(ss, city, ',');  

//         if (stoi(sroll) == roll) {
//             cout << "\nStudent Found:\n";
//             cout << "Roll Number: " << sroll << "\n";
//             cout << "Name: " << name << "\n";
//             cout << "City: " << city << "\n";
//             found = true;
//             break;
//         }
//     }
//     fin.close();

//     if (!found) {
//         cout << "Student not found!\n";
//     }
// }

// int main() {
//     bool isAppRunning = true;

//     while (isAppRunning) {
//         cout << "\n1. Add Student" << endl;
//         cout << "2. Get Student by ID" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice: ";

//         int choice;
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 addStudent();
//                 break;
//             case 2:
//                 getStudent_by_id();
//                 break;
//             case 3:
//                 cout << "Exiting program...\n";
//                 isAppRunning = false;
//                 break;
//             default:
//                 cout << "Invalid choice! Please enter 1, 2, or 3.\n";
//         }
//     }

//     return 0;
// }