#include <iostream>
using namespace std;
class EmployeeType
{
    private:
    int employee_no;
    float employee_comp;
    public:
    void set_en(int a)
    {
       employee_no=a;
    }
    void set_ec(int b)
    {
        employee_comp=b;
    }
    int get_en()
    {
        return employee_no;
    }
    float get_cp()
    {
        return employee_comp;
    }

    void get_Data(EmployeeType E[])
    {
        int number;
        float compensation;
        for(int i=0 ; i<3 ; i++)
        {
        cout<<"Enter Employee number"<<endl;
        cin>>number;
        E[i].set_en(number);
        cout<<"Enter Employee compensation"<<endl;
        cin>>compensation;
        E[i].set_ec(compensation);

        }
    }
    void show_Data(EmployeeType E[])
    {
         for(int i=0 ; i<3 ; i++)
         {
         cout<<"Employee number : "<<E[i].get_en()<<endl;
         cout<<"Employee compensation : "<<E[i].get_cp()<<endl;
         }
    }
};



int main()
{
   // int n;
    //cout<<"Enter number of employes"<<endl;
   // cin>>n;
 EmployeeType E[3];
    for(int i=0 ; i<3 ; i++)
    {
        E[i].get_Data(E);
        E[i].show_Data(E);
        break;
    }
    return 0;
}
