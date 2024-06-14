#include <iostream>
#include <cstring>
using namespace std;

// Function to get user input
void getData(string maritalStatus, int numChildren, double grossSalary, double pensionPercentage) {
    cout << "Enter marital status (single/married): ";
    cin >> maritalStatus;

    if (maritalStatus == "married"||maritalStatus == "Married") {
        cout << "Enter number of children under the age of 14: ";
        cin >> numChildren;
    }

    cout << "Enter gross salary: ";
    cin >> grossSalary;

    cout << "Enter percentage of gross income contributed to a pension fund: ";
    cin >> pensionPercentage;
}

// Function to calculate the tax owed
double taxAmount(string maritalStatus, int numChildren, double grossSalary, double pensionPercentage) {
    double standardExemption = 4000.0;
    if (maritalStatus == "married"||maritalStatus == "Married") {
        standardExemption = 7000.0;
        standardExemption += numChildren * 1000.0;
    }

    double taxableIncome = grossSalary - (grossSalary * pensionPercentage / 100.0) - standardExemption;
    double tax = 0.0;

    if (taxableIncome <= 15000.0) {
        tax = taxableIncome * 0.15;
    }
    else if (taxableIncome <= 40000.0) {
        tax = 2250.0 + (taxableIncome - 15000.0) * 0.25;
    }
    else {
        tax = 8460.0 + (taxableIncome - 40000.0) * 0.35;
    }

    return tax;
}

int main() {
    string maritalStatus;
    int numChildren;
    double grossSalary, pensionPercentage;

    // Get user input
    getData(maritalStatus, numChildren, grossSalary, pensionPercentage);

    // Calculate and display tax owed
    double tax = taxAmount(maritalStatus, numChildren, grossSalary, pensionPercentage);
    cout << "Tax   :  " << tax << endl;

    return 0;
}
