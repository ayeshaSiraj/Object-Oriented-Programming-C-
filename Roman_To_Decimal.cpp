#include <iostream>
#include <string>
using namespace std;
int count=0;
class Romantype
{
    private:
    string rome;
    int decimal;
    public:
  
    void set_rome(string rome)
    {
      this->rome=rome;
    }

    Romantype()
    {
        rome="";
        decimal=0;
    }
   
    



int TheRomanList(char rom)
{
  
   
        if (rom=='M')
        {
            return 1000;
        }
        else if(rom=='D')
        {
            return 500;
        }
        else if(rom=='C')
        {
             return 100;
        }
        else if(rom=='L')
        {
            return 50;
        }
        else if(rom=='X')
        {
             return 10;
        }
        else if(rom=='V')
        {
            return 5;
        }
        else if(rom=='I')
        {
            return 1;
        } 
}
void ConvertDecimal() {
    decimal = 0;
    int old_value = 0;

    for (int i = rome.length() - 1; i >= 0; i--) {//decremental order
        int new_value = TheRomanList(rome[i]);

        if (new_value < old_value) {
            decimal -= new_value;
        } else {
            decimal += new_value;
        }

        old_value = new_value;
    }
}


void printRom()
{
    cout<<"The Roman : "<<rome<<endl;
}

void printDec()
{
    cout<<"The Decimal : "<<decimal<<endl;
}


};

int main()
{
    
    Romantype r1,r2,r3;
    //test program

cout<<"---------------------First test case-------------------------"<<endl;
    r1.set_rome("MCXIV");
    r1.ConvertDecimal();
    r1.printRom();
    r1.printDec();

cout<<"---------------------Second test case-------------------------"<<endl;

    r2.set_rome("CCCLIX");
    r2.ConvertDecimal();
    r2.printRom();
    r2.printDec();

cout<<"---------------------Third test case-------------------------"<<endl;

    r3.set_rome("MDCLXVI");
    r3.ConvertDecimal();
    r3.printRom();
    r3.printDec();

    

}