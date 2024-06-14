#include <iostream>
#include <cstring>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct dateType {
   int month;
   int day;
   int year; 
};

struct employeeType {
    int employeeNumber;
    float employeeCompensation;
    etype employeeType;
    dateType employmentDate;
};

int main() {
    employeeType E[3];

    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Enter employee number: ";
        cin >> E[i].employeeNumber;

        cout << "Enter employee compensation: ";
        cin >> E[i].employeeCompensation;

        cout << "Enter employee type (0-laborer, 1-secretary, 2-manager, 3-accountant, 4-executive, 5-researcher): ";
        int employeeTypeValue;
        cin >> employeeTypeValue;
        E[i].employeeType = static_cast<etype>(employeeTypeValue);

        cout << "Enter employment date  in the form MM /DD/YY: ";
    char slash;
    cout<<"Enter month day and year in the form dd/mm/yy "<<endl;
    cin>>E[i].employmentDate.day>>slash>>E[i].employmentDate.month>>slash>>E[i].employmentDate.year;

    cout<<E[i].employmentDate.day<<" / "<<E[i].employmentDate.month<<" / "<<E[i].employmentDate.year<<endl;
    }

    cout << "Employee Information:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Employee number: " << E[i].employeeNumber << endl;
        cout << "Employee compensation: " << E[i].employeeCompensation << endl;
        cout << "Employee type: " << E[i].employeeType << endl;
        cout << "Employment date: " << E[i].employmentDate.month << "/" << E[i].employmentDate.day << "/" << E[i].employmentDate.year << endl;
    
    }

    return 0;
}
