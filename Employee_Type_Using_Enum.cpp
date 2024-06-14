#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive,researcher };
int main()
{
    char input;
    cout<<"Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher:"<<endl;
    cin>>input;

    switch (input)
    {
    case 'l':
        cout<<"Employee type is laborer";
        break;
    case 's':
        cout<<"Employee type is secretary";
        break;
    case 'm':
        cout<<"Employee type is manager";
        break;
    case 'a':
        cout<<"Employee type is accountant";
        break;
    case 'e':
        cout<<"Employee type is executive";
        break;
    case 'r':
        cout<<"Employee type is researcher";
        break;
    
    default:
        break;
    }
}