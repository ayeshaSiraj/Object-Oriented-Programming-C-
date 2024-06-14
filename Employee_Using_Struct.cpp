#include <iostream>
#include <cstring>
using namespace std;
struct employeeType
{
    int employeeNumber;
    float employeeCompensation;
};
int main()
{
    employeeType E[3];
    for(int i=0 ; i<3 ; i++)
    {
        cout<<"Enter Employee number :"<<endl;
        cin>>E[i].employeeNumber;
        cout<<"Enter Employee Compensation :"<<endl;
        cin>>E[i].employeeCompensation;
    }

    for(int i=0 ; i<3 ; i++)
    {
        cout<<"Employee Number "<<E[i].employeeNumber<<endl;
        cout<<"Employee "<<E[i].employeeNumber<<" Compensation : $"<<E[i].employeeCompensation<<endl;
    }
}