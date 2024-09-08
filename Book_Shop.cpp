#include <iostream>
#include <cstring>

using namespace std;

class memberType {
private:
    string name;
    int memberID;
    int numBooksBought;
    double amountSpent;

public:
    memberType() {
        name = "";
        memberID = 0;
        numBooksBought = 0;
        amountSpent = 0.0;
    }

    memberType(string name, int memberID, int numBooksBought, double amountSpent) {
        this->name=name;
        this->memberID=memberID; 
        this->numBooksBought=numBooksBought;
        this->amountSpent =amountSpent;
    }

    void setName(string n) {
        name = n;
    }

    void setMemberID(int id) {
        memberID = id;
    }

    void setNumBooksBought(int numBooks) {
        numBooksBought = numBooks;
    }

    void setAmountSpent(double spent) {
        amountSpent = spent;
    }

    string getName() {
        return name;
    }

    int getMemberID() {
        return memberID;
    }

    int getNumBooksBought() {
        return numBooksBought;
    }

    double getAmountSpent() {
        return amountSpent;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Member ID: " << memberID << endl;
        cout << "Number of Books Bought: " << numBooksBought << endl;
        cout << "Amount Spent: " << amountSpent << endl;
    }
};

int main() {
    memberType m1("Ayesha",1234, 5, 100.0);
    m1.show();

    m1.setName("Alishba");
    m1.setMemberID(1245);
    m1.setNumBooksBought(10);
    m1.setAmountSpent(200.0);

    cout << "\nUpdated Member Information:"<<endl;
    m1.show();

    return 0;
}
