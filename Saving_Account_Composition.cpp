#include <iostream>
#include <cstring>
using namespace std;
class Saving_Account
{
    static double annualInterestRate;
    double SavingsBalance;
    public:
    void calMonthlyInterest()
    {
        double monthlyInterest=SavingsBalance*annualInterestRate;
         monthlyInterest=monthlyInterest/12;
         SavingsBalance+=monthlyInterest;
    }
  static  void ModifyInterestRate(double newvalue)
    {
         annualInterestRate=newvalue;
    }
double getSavingBalance()
{
    return SavingsBalance;
}
void printBalance()
{
    cout<<SavingsBalance<<endl;
}
Saving_Account(double SavingBalance)
{
    this->SavingsBalance=SavingBalance;
}

};
 
 double Saving_Account::annualInterestRate=0.0;

int main()
{
    Saving_Account s1(2000.0);
    Saving_Account s2(3000.0);

    s1.ModifyInterestRate(0.03);
    s2.ModifyInterestRate(0.03);

    s1.calMonthlyInterest();
    s2.calMonthlyInterest();

    cout<<"Balance with 3% annual interest rate : ";
    s1.printBalance();
    cout<<"Balance with 3% annual interest rate : ";
    s2.printBalance();

    s1.ModifyInterestRate(0.04);
    s2.ModifyInterestRate(0.04);

    s1.calMonthlyInterest();
    s2.calMonthlyInterest();

    cout<<"Balance with 4% annual interest rate : ";
    s1.printBalance();
    cout<<"Balance with 4% annual interest rate : ";
    s2.printBalance();
}