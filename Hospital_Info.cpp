#include <iostream>
#include <cstring>
using namespace std;

class personType
{
    protected:
string firstName; //variable to store the first name
string lastName; //variable to store the last name

public:
void print() const
{
    cout<<"First Name : "<<firstName<<"\n"<<"Last Name : "<<lastName<<endl;
}
//Function to output the first name and last name
//in the form firstName lastName.
void setName(string first, string last)
{
    firstName=first;
    lastName=last;
}
//Function to set firstName and lastName according
//to the parameters.
//Postcondition: firstName = first; lastName = last;
string getFirstName() const
{
    return firstName;
}
//Function to return the first name.
//Postcondition: The value of firstName is returned.
string getLastName() const
{
    return lastName;
}
//Function to return the last name.
//Postcondition: The value of lastName is returned.
personType(string first = "", string last = "")
{
    setName(first,last);
}
//Constructor
//Sets firstName and lastName according to the parameters.
//The default values of the parameters are null strings.
//Postcondition: firstName = first; lastName = last;
};

class dateType
{
public:
void setDate(int day, int month, int year)
{
    dDay=day;
    dMonth=month;
    dYear=year;

}
//Function to set the date.
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition: dMonth = month; dDay = day;
// dYear = year
int getDay() const
{
    return dDay;
}
//Function to return the day.
//Postcondition: The value of dDay is returned.
int getMonth() const
{
    return dMonth;
}
//Function to return the month.
//Postcondition: The value of dMonth is returned.
int getYear() const
{
    return dYear;
}
//Function to return the year.
//Postcondition: The value of dYear is returned.
void printDate() const
{
    cout<<dDay<<"/"<<dMonth<<"/"<<dYear<<endl;
}
//Function to output the date in the form mm-dd-yyyy.
dateType(int day = 1, int month = 1, int year = 1900)
//Constructor to set the date
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition:
{ setDate(day,month,year);}
// If no values are specified, the default
// values are used to initialize the member
// variables.
private:
int dMonth; 
int dDay; 
int dYear; 
};


class doctorType : public personType
{
   string Doc_Speciality;

   public:

   doctorType(string firstName,string lastName,string Doc_Speciality):personType(firstName,lastName)
   {
     this->Doc_Speciality=Doc_Speciality;
   }

   void print() const{
    cout<<"First Name : "<<firstName<<"\nLast Name : "<<lastName<<"\nDoctor's Speciality : "<<Doc_Speciality<<endl;
   }
};

class billType
{
    double ID;
    float phar_char;
    float med_char;
    float doc_fee;
    float room_char;
    
    public:

    billType(double ID,float phar_char,float med_char,float doc_fee,float room_char)
    {
        this->ID=ID;
        this->phar_char=phar_char;
        this->med_char=med_char;
        this->doc_fee=doc_fee;
        this->room_char=room_char;
    }

    void print()const
    {
        cout<<"ID : "<<ID<<"Pharmacy Charges : "<<phar_char<<"Medicine Charge : "<<med_char<<"Doctor's Fee : "<<doc_fee<<"Room Charges : "<<room_char<<endl;
    }

};

class patientType
{
    double ID;
    int age;
    dateType dob;
    doctorType phys_name;
    dateType admit_date;
    dateType dis_date;

    public:

    patientType(double ID,int age,int dDay,int dMonth,int dYear,string firstName,string lastName,string Doc_Speciality,int dday,int dmonth,int dyear,int Day,int Month,int Year ):dob(dDay,dMonth,dYear),phys_name(firstName,lastName,Doc_Speciality),admit_date(dday,dmonth,dyear),dis_date(Day,Month,Year)
    {
       this->ID=ID;
       this->age=age;
    }
};

int main()
{
    

      doctorType doc("Ayesha","Last","ENT");
      doc.print();

      billType bill(9876,900,560,80000,5000);
      bill.print();

      patientType p(9876,10,9,12,2004,"Ayesha","Siraj","ENT",8,6,2016,9,7,2016);
      







}


