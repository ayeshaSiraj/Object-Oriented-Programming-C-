#include <iostream>
using namespace std;
class Angle
{
    private:
    int degrees;
    float minutes;
    char direction;
    public:
    Angle()
    {
        degrees=0;
        minutes=0.0;
        direction=0;
    }

    Angle(int degrees,float minutes,char direction)
    {
        this->degrees=degrees;
        this->minutes=minutes;
        this->direction=direction;
    }
    void getangle()
    {
        cout<<"Enter the angle value"<<endl;
        cin>>degrees>>minutes>>direction;
    }
    void showangle()
    {
        
        cout<<degrees<<'\xF8'<<minutes<<"'"<<direction<<endl;
    }
};
int main()
{
    Angle a(160,41.2,'N');
    a.showangle();
     char choice;

    do{

     cout<<"Enter degree"<<endl;
     int de;
     cin>>de;

     cout<<"Enter minutes"<<endl;
     float min;
     cin>>min;

     cout<<"Enter Direction"<<endl;
     char dir;
     cin>>dir;


     Angle b(de,min,dir);
     b.showangle();
   
     cout<<"Do you want to enter another angle ? (Y/N)"<<endl;
     cin>>choice;
    }while(choice=='y'||choice=='Y');
}