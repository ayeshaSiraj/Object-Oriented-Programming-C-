#include <iostream>
using namespace std;
enum etype{ laborer, secretary, manager};

class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    
    void setday(int day)
    {
        this->day=day;
    }
    void setmonth(int month)
    {
        this->month=month;
    }
    void setYear(int year)
    {
        this->year=year;
    }

    int getday()
    {
        return day;
    }
int getmonth()
{
    return month;
}

int getyear()
{
    return year;
}


    void EnterDate()
    {
       int d,m,y;
        char slash;
        cout<<"Enter day month and year in hte format dd/mm/yy"<<endl;
        cin>>d>>slash>>m>>slash>>y;
        setday(d);
        setmonth(m);
        setYear(y);

    }
    void showdate()
    {
        cout<<getday()<<"/"<<getmonth()<<"/"<<getyear()<<endl;
    }







};
class EmployeeType
{
    private:
    Date date;
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
    void setdate(Date d)
    {
        d.EnterDate();
    }

    void get_Data(EmployeeType E[],int n)
    {
        int number;
        float compensation;
        for(int i=0 ; i<n ; i++)
        {
        cout<<"Enter Employee number"<<endl;
        cin>>number;
        E[i].set_en(number);
        cout<<"Enter Employee compensation"<<endl;
        cin>>compensation;
        E[i].set_ec(compensation);

        }
    }
    void show_Data(EmployeeType E[],int n)
    {
         for(int i=0 ; i<n ; i++)
         {
         cout<<"Employee number : "<<E[i].get_en()<<endl;
         cout<<"Employee compensation : "<<E[i].get_cp()<<endl;
         }
    }
};





int main()
{
    int n;
    Date date;
    cout<<"Enter number of employes"<<endl;
    cin>>n;
 EmployeeType E[n];
    for(int i=0 ; i<n ; i++)
    {
        E[i].get_Data(E,n);
        date.EnterDate();
        E[i].show_Data(E,n);
                date.showdate();

    }
    return 0;
}
