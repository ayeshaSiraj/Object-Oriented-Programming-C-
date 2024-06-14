#include <iostream>
using namespace std;
struct dateType
{
   int month;
   int day;
   int year; 
};
int main()
{
    dateType Date;
    char slash;
    cout<<"Enter month day and year in the form dd/mm/yy "<<endl;
    cin>>Date.month>>slash>>Date.day>>slash>>Date.year;

    cout<<Date.month<<" / "<<Date.day<<" / "<<Date.year<<endl;

}