#include <iostream>
using namespace std;
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

int main()
{
    Date date;
    date.EnterDate();
    date.showdate(); 
}