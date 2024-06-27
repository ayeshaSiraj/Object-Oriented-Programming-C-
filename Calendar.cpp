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
bool leapk(int y)
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
int returnMonthnum(int month)
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
{protected:
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
class dayType
{protected:
   string day;
   static string days[7];
   //static string days2[7];

    public:

    void setday(string day)
    {
        if(day=="Monday" ||day=="monday")
        this->day=days[0];
        
        else if(day=="Tuesday"||day=="tuesday")
        this->day=days[1];

        else if(day=="Wednesday"||day=="wednesday")
        this->day=days[2];
        
        else if(day=="Thursday"||day=="thursday")
        this->day=days[3];

        else if(day=="Friday"||day=="friday")
        this->day=days[4];
        
        else if(day=="Saturday"||day=="saturday")
        this->day=days[5];

        else if(day=="Sunday"||day=="sunday")
        this->day=days[6];

       else
       {
        
//        cout<<"Invalid Input for week day\nPlease enter again"<<endl;
do{
            cout<<"Invalid Input for week day\nPlease enter again"<<endl;

       cin>>day;
}while(day!="Monday" ||day!="Tuesday" ||day!="Wednesday" ||day!="Thursday" ||day!="Friday" ||day!="Saturday" ||day!="Sunday");


    if(day=="Monday"||day=="monday")
        this->day=days[0];
        
        else if(day=="Tuesday"||day=="tuesday")
        this->day=days[1];

        else if(day=="Wednesday"||day=="wednesday")
        this->day=days[2];
        
        else if(day=="Thursday"||day=="thursday")
        this->day=days[3];

        else if(day=="Friday"||day=="friday")
        this->day=days[4];
        
        else if(day=="Saturday"||day=="saturday")
        this->day=days[5];

        else if(day=="Sunday"||day=="sunday")
        this->day=days[6];

       }
    }

    void printDay()
    {
        cout<<"WEEK DAY : "<<day<<endl;
    }

    string getDaY()
    {
        return day;
    }

    string ReturnNextDay()
    {string d=day;
        for(int i=0 ; i<7 ; i++)
        {
            if(day==days[i])
            {
             if(day=="Sun")
             d=days[0];
             
             
             else
             d=days[i+1];

             cout<<"Next Day : "<<d<<endl;
            }
           
        }
        return d;
    }
string ReturnPrevDay()
{
    string d=day;
        for(int i=0 ; i<7 ; i++)
        {
            if(day==days[i])
            {
             if(day=="Mon")
             {d=days[6];
             
             }
             else
             d=days[i-1];

             cout<<"Previous Day : "<<d<<endl;
            }
            
        }
        return d;
}

string AddDay()
{
    int dnum;
    cout<<"Enter number of days to add "<<endl;
    int days_to_add;
    cin>>days_to_add;
        
            for(int i=0 ; i<7 ; i++)
            {
                if(day==days[i])
                dnum=i;
            }
            int newday=(dnum+days_to_add)%7;
        
                cout<<"New Day : "<<days[newday]<<endl;
        
        return days[newday];
    

}
dayType(string day)
{
    setday(day);
}
dayType()
{
    day="";
}


};

string dayType::days[7]={{"Mon"},{"Tue"},{"Wed"},{"Thurs"},{"Fri"},{"Sat"},{"Sun"}};

class calanderType:public extDate
{
    dayType Day;
    extDate Date;

    public:

    
     
     void set_Month(int month)
     {
        Date.setMonth(month);
     }

     void set_Year(int year)
     {
        Date.setYear(year);
     }

     int get_Month()
     {
        return Date.getMonth();
     }

     int get_Year()
     {
        return Date.getYear();
     }
   


   int Calcfirstday(int month,int year)
    {
          int firstday=1;
          int firstmonth=1;
          int firstyear=1500;

          int d=0;

          for(int y=firstyear ; y<year ; y++)
          {
            if(Date.leapk(y)==1)
            {
                d+=365;
            }
            else if(Date.leapk(y)==0)
            {
                d+=366;
            }
          }

          for(int m=firstmonth ; m<month ; m++)
          {
            d+=Date.returnMonthnum(m);
          }

          int dayWeek=(firstday+d)%7;
          return dayWeek;

    }



   void printCalender()
   {
    int weekfirstday=Calcfirstday(get_Month(),get_Year());
    int daysof_the_month=Date.returnMonthnum(get_Month());


     cout<<"---------------"<<Date.months[get_Month()-1]<<" - "<<get_Year()<<"-----------------"<<endl;
     cout<<"___________________________________________________________________"<<endl;
     cout<<"  Monday   Tuesday   Wednesday   Thursday   Friday   Saturday   Sunday "<<endl;
     
    for(int i=0; i<weekfirstday ; i++)
    {
        cout<<"      ";
    }

     for(int i=1 ; i<=daysof_the_month ; i++)
     {
        cout<<"   "<<i<<"   ";
        weekfirstday++;

        if(weekfirstday>6)
        {
            weekfirstday=0;
            cout<<"\n";
        }
     }

     if(weekfirstday!=0)
     cout<<endl;
cout<<"\n_____________________________________________________________________________";
   }
calanderType(int month,int year):Date(1,month,year),extDate(1,month,year)
{
    Date.setDate(1,month,year);
}


};


int main()
{
    calanderType c(5,2023);
    c.printCalender();
}