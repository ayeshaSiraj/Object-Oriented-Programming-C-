#include <iostream>
#include <cstring>
using namespace std;

class dayType
{
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
//string dayType::days2[7]={{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"}};


int main()
{
    dayType d("Ayesha");
    d.printDay();
    d.ReturnNextDay();
    d.ReturnPrevDay();
    d.AddDay();
}