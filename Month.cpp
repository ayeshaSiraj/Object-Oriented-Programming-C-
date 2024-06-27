#include <iostream>
#include <cstring>
using namespace std;

class dateType
{protected:
  int day;
int month;
int year;

public:
void setDate(int day, int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}
void setMonth(int month)
{
    if(month>12 ||month<1)
    {int mo=month;
       while(mo>12 ||mo<1)
       { 

        cout<<"Invalid input for month"<<endl;
             cout<<" Please Enter valid input"<<endl;
        cin>>mo;   
       }
cout<<"You have entered a valid input for month"<<endl;
       this->month=mo;
    }
    else
    this->month=month;
}


void setday(int day)
{
    if(month==1 || month==3 || month==5 || month==7 || month==8 ||month==10 ||month==12)
    {
        if(day<1 ||day>31)
       {
        int da=day;
       while(da<1 ||da>31)
       { 

        cout<<"Invalid input for day"<<endl;
             cout<<" Please Enter valid input"<<endl;
        cin>>da;   
       }
cout<<"You have entered a valid input for day"<<endl;
       this->day=da;
       }
        else
        this->day=day;
    }
    else if(month==4|| month==6 || month==9 || month==11 )
    {
        if(day<1 ||day>30)
         {
        int da=day;
       while(da<1 ||da>30)
       { 

        cout<<"Invalid input for day"<<endl;
             cout<<" Please Enter valid input"<<endl;
        cin>>da;   
       }
cout<<"You have entered a valid input for day"<<endl;
       this->day=da;
       }
        else
        this->day=day;
    }
    else if(month==2)
    {
        if(leap()==0)
        {
           
        int da=day;
       while(da<0 || da>29)
       { 

        cout<<"Invalid input for day"<<endl;
             cout<<" Please Enter valid input"<<endl;
        cin>>da;   
       }
cout<<"You have entered a valid input for day"<<endl;
       this->day=da;
           
        }
        else if(leap()==1)
        {
             int da=day;
       while(da<0 || da>28)
       { 

        cout<<"Invalid input for day"<<endl;
             cout<<" Please Enter valid input"<<endl;
        cin>>da;   
       }
cout<<"You have entered a valid input for day"<<endl;
       this->day=da;
        }
        else
        this->day=day;
    }

}

bool leap()
{
    if(year%400==0)
    return 1;
    else if(year%100==0)
    return 0;
    else if(year%4==0)
    return 1;
    else
    return 0;
}
bool leapwr()
{
    if(year%400==0)
    {cout<<"Year is leap year"<<endl;
    return 1;}
    else if(year%100==0)
    {cout<<"Year is not a leap year"<<endl;
    return 0;}
    else if(year%4==0)
    {cout<<"Year is leap year"<<endl;
    return 1;}
    else
    {cout<<"Year is not a leap year"<<endl;
    return 0;}
}

void setYear(int year)
{
    
    if(year>2023 ||year<0){
              int ye=year;

    while(ye>2023 || ye<0){
    
cout<<"Invalid input for year"<<endl;
      cout<<" Please Enter valid input"<<endl;
      cin>>ye;
         
    }
    cout<<"You have entered a valid input for year "<<endl;

    this->year=ye;
    }
    
   
    else
    this->year=year;
}

int getDay() const
{
    return day;
}
//Function to return the day.
//Postcondition: The value of dDay is returned.
int getMonth() const
{
    return month;
}
//Function to return the month.
//Postcondition: The value of dMonth is returned.
int getYear() const
{
    return year;
}
//Function to return the year.
//Postcondition: The value of dYear is returned.
void printDate() const
{
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}
int returnMonth()
{
    if(month==1 || month==3 || month==5 || month==7 || month==8 ||month==10 ||month==12)
    return 31;
    else if(month==4|| month==6 || month==9 || month==11 )
    return 30;
    else if(month==2)
    {
        if(leap()==0)
        return 29;
        else if(leap()==1)
        return 28;
    }
}

int CalcPassedDays()
{
    int dayPassed=0;
    for(int i=1 ; i<month ; i++)
    {
            if(i==1 || i==3 || i==5 || i==7 || i==8 ||i==10 ||i==12)
            dayPassed+=31;
            else if(i==4|| i==6 || i==9 || i==11 )
            dayPassed+=30;
         else if(i==2)
    {
        if(leap()==0)
        dayPassed+=29;
        else if(leap()==1)
        dayPassed+=28;
    }    
     }

     dayPassed+=day;
     cout<<"Days passed are : "<<dayPassed<<endl;
     return dayPassed;

}

void CalcRemainingDays()
{
      int Passeddays=CalcPassedDays();
      int remainingDays;
      int the_Year=leap();
      if(the_Year==1)
      remainingDays=365-Passeddays;
      else if(the_Year==0)
      remainingDays=366-Passeddays;

      cout<<"Remaining days are "<<remainingDays<<endl;

}

void CalcNewDate()
{
    int addDay;
    cout<<"Enter the number of days to be added"<<endl;
    cin>>addDay;
    while(addDay>0)
   { int remaining_days_month=returnMonth()-day+1;
     if(addDay>=remaining_days_month)
     {
        addDay-=remaining_days_month;
        day=1;
        if(month==12)
        {month=1;
        year++;}
        else
        month++;
     }
     else
     {
        day+=addDay;
        addDay=0;
     }
   }

 cout<<"New Date : "<<endl;
     cout<<day<<"-"<<month<<"-"<<year<<endl;
        
     }


//Function to output the date in the form mm-dd-yyyy.
dateType(int d, int m, int y)
{     setYear(y);
     setMonth(m);
   setday(d);
}
/*dateType()
{
    day=0;
    month=0;
    year=1990;
}*/

//Constructor to set the date
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition:
// If no values are specified, the default
// values are used to initialize the member
// variables.
 
};


class extDate : public dateType
{
    string Month;
    string Date;
    static string months[12];

    public:

    void MonthtoString()
    {
        Month=months[month-1];
    }
    void DateToString()
    {
        MonthtoString();
        Date=to_string(day)+" "+Month+" "+to_string(year);
        cout<<Date<<endl;
    }

extDate(int day, int month, int year):dateType(day,month,year)
{   
    
}


};

string extDate::months[12]={{"January"},{"Febuary"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"}};

int main()
{
    extDate d(14,6,1993);
    d.printDate();
    d.DateToString();
    d.leapwr();
    d.returnMonth();
    d.CalcPassedDays();
    d.CalcRemainingDays();
    d.CalcNewDate();
    
}