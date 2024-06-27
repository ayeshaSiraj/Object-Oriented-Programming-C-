#include <iostream>
#include <cstring>
#include <ctime>
#include <map>
using namespace std;

class bankAccount
{   protected:
    string Acc_Number;
    double balance;

    public:

    void set_Acc_Num(string Acc_Number)
    {
        this->Acc_Number=Acc_Number;
    }

    string get_Acc_Num()
    {
         return Acc_Number;
    }

    void set_balance(double balance)
    {
        this->balance=balance;
    }

    double  get_balance()
    {
        return balance;
    }

    void Deposit(double amount)
    {
        double am;
        cout<<"Enter amount of deposit"<<endl;
        cin>>am;
        balance=balance+am;
    }
    virtual void Withdraw()
    {
        double am;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>am;
        if(am>balance)
        cout<<"Insuffcient Balance"<<endl;
        else
        balance=balance-am;
    }

    bankAccount()
    {
        Acc_Number="";
        balance=0;
    }
    bankAccount(string Acc_Number,double balance)
    {
        this->Acc_Number=Acc_Number;
        this->balance=balance;
    }

};

class checkingAccount : public bankAccount
{
    static double interest;
    static double minBalance;
    long long int serviceCharges;
    
    public:

void set_interest(double interest)
    {
        this->interest=interest;
    }

    double  get_interest()
    {
        return interest;
    }

    void set_minBal(double minBalance)
    {
        this->minBalance=minBalance;
    }

    double  get_minBalance()
    {
        return minBalance;
    }
    void set_SC(long long int serviceCharges)
    {
        serviceCharges=0;
    }

    double  get_sc()
    {
        return serviceCharges;
    }
void Withdraw()
    {   
        double am;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>am;
        if(am<20000)
       {
        if(am>balance)
        cout<<"Insuffcient Balance"<<endl;
        else
       { balance=balance-am;
          verify();
       }}
        else
        cout<<"You are exceeding the transaction limit of 20,000"<<endl;
    }
    void verify()
    {
        if(balance>minBalance)
        serviceCharges=0.0001;
        else if(balance<minBalance)
        serviceCharges=350;
    }
    void postinterest()
    {
        double interest_money=(balance/100)*interest;
        balance=balance+interest_money;
    }
    void writeCheck()
    {
        
        string payee;
        cout<<"Enter name of the payee : "<<endl;
    
        getline(cin>>ws,payee);
        double amount;
        cout<<"Enter amount to be paid"<<endl;
        cin>>amount;
        balance=balance-amount;
        time_t currentTime = time(nullptr);
     string date = asctime(localtime(&currentTime)); 
    cout << "Bank Check" << endl;
    cout << "-------------------------" << endl;
    cout << "Payee: " << payee << endl;
    cout << "Date: " << date;
    cout << "Amount: Rs" << amount << endl;
    //cout << "Amount in words: " << amountInWords << endl;
    cout << "-------------------------" << endl;
    }

   void print()
   {
      cout<<"Account Number : "<<Acc_Number<<endl;
      cout<<"Account Balance : "<<balance<<endl;
      cout<<"Interest Rate : "<<interest<<endl;
      cout<<"Service Charges : "<<serviceCharges<<endl;
   }

   checkingAccount()
   {
    serviceCharges=0;
   }
   checkingAccount(string Acc_Number,double balance):bankAccount(Acc_Number,balance)
   {
       
   }



};

double checkingAccount::interest=10;
double checkingAccount::minBalance=500;


class savingsAccount : public bankAccount
{
    static double interest;

    public:

    void set_interest(double interest)
    {
        this->interest=interest;
    }

    double  get_interest()
    {
        return interest;
    }
     void postinterest()
    {
        double interest_money=(balance/100)*interest;
        balance=balance+interest_money;
    }
    void Withdraw()
    {
        double am;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>am;
        
        if(am<50000)
       { if(am>balance)
        cout<<"Insuffcient Balance"<<endl;
        else
        balance=balance-am;}
        else
        cout<<"You are exceeding the transaction limit of 50,000"<<endl;
    }
    void print()
   {
      cout<<"Account Number : "<<Acc_Number<<endl;
      cout<<"Account Balance : "<<balance<<endl;
      cout<<"Interest Rate : "<<interest<<endl;
   }
   savingsAccount(string Acc_Number,double balance):bankAccount(Acc_Number,balance){}

};

double savingsAccount::interest=10;


int main()
{cout<<"----------------------Saving Account---------------------"<<endl;
    savingsAccount s("S001",20000);
    s.Deposit();
    s.Withdraw();
    s.postinterest();
    s.print();
    cout<<"----------------------Checking Account---------------------"<<endl;

    checkingAccount c("C001",4000);
    c.Deposit();
    c.Withdraw();
     c.postinterest();
     c.writeCheck();
     c.verify();
    c.print();
    bankAccount b("001",90000);
    return 0;
}
