#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void addEmployee() {
    ofstream file("employees.txt", ios::app); 
    if (!file.is_open()) {
        cout << "Error in opening the file to add employee.\n";
        return;
    }

    int id;
    string name, department;

    cout << "\nAdd New Employee\n";
    cout << "---------------------\n";

    cout << "Enter Employee ID: ";
    if (!(cin >> id)) {
        cout << "Invalid input. Employee ID must be a number.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    cout << "Enter Name (no spaces): ";
    cin >> name;

    cout << "Enter Department (no spaces): ";
    cin >> department;

    file << id << " " << name << " " << department << endl;
    file.close();

    cout << "Employee added successfully!\n";
}

void viewAllEmployees() {
    ifstream file("employees.txt");
    if (!file) {
        cout << "Error in opening the file for reading.\n";
        return;
    }

    string line;
    bool hasInfo = false;

    cout << "\nEmployee Details\n";
    cout << "------------------------\n";

    while (getline(file, line)) {
        if (line.empty()) continue;
        hasInfo = true;
        cout << line << endl;
    }

    if (!hasInfo) {
        cout << "No employee records found.\n";
    }

    file.close();
}

void getEmployeeById() {
    ifstream file("employees.txt");
    if (!file) {
        cout << "Error in opening the file for reading.\n";
        return;
    }

    int searchId;
    cout << "\nSearch Employee by ID\n";
    cout << "---------------------------\n";
    cout << "Enter Employee ID : ";

    if (!(cin >> searchId)) {
        cout << "Invalid input. ID must be a number.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    string line;
    bool found = false;

    while (getline(file, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        int id;
        string name, department;
        ss >> id >> name >> department;

        if (id == searchId) {
            cout << "\nEmployee Found:\n";
            cout << "ID: " << id << "\nName: " << name << "\nDepartment: " << department << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << searchId << " not found.\n";
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n-------- Employee Directory Management System --------\n";
        cout << "1.Add Employee\n";
        cout << "2.View All Employees\n";
        cout << "3.Search Employee by ID\n";
        cout << "4.Exit\n";
        cout << "------------------------------------------------------------\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 4.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                viewAllEmployees();
                break;
            case 3:
                getEmployeeById();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please select an option from 1 to 4.\n";
        }

    } 
    while (choice != 4);

    return 0;
}
