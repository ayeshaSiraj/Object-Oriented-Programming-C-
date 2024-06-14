#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    
    string empName;
    double g_Amount;

    cout << "Enter employee name: ";
    getline(cin, empName);

    cout << "Enter gross amount: ";
    cin >> g_Amount;

    
    double fed_Tax = g_Amount * 0.15;
    double state_Tax = g_Amount * 0.035;
    double soc_sec_Tax = g_Amount * 0.0575;
    double med_Tax = g_Amount * 0.0275;
    double pension = g_Amount * 0.05;
    double health_Insurance = 75.00;
    double netPay = g_Amount - fed_Tax - state_Tax - soc_sec_Tax - med_Tax - pension - health_Insurance;

    cout << empName << endl;
    cout << right << setprecision(10);
    cout << "Gross Amount: ............ $" << setw(10) << g_Amount << endl;
    cout << "Federal Tax: .................. $" << setw(10) << fed_Tax << endl;
    cout << "State Tax: ...................... $" << setw(10) << state_Tax << endl;
    cout << "Social Security Tax: ..... $" << setw(10) << soc_sec_Tax << endl;
    cout << "Medicare/Medicaid Tax: $" << setw(10) << med_Tax << endl;
    cout << "Pension Plan: ................ $" << setw(10) << pension << endl;
    cout << "Health Insurance: ........... $" << setw(10) << health_Insurance << endl;
    cout << "Net Pay: .......................... $" << setw(10) << netPay << endl;

    return 0;
}
