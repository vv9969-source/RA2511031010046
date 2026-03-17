#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string empName;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
    }
};

class Manager : public Employee {
private:
    string department;
    float salary;

public:
    void getManager() {
        getEmployee();
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.getManager();
    m.display();
    return 0;
}