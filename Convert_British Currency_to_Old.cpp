#include <iostream>
using namespace std;

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

sterling convertToOldSystem(double amount) {
    sterling result;

    // Convert decimal pounds to old-style pounds, shillings, and pence
    result.pounds = amount;
    double remainder = amount - result.pounds;

    double totalPence = remainder * 100;
    result.shillings = totalPence / 12;
    result.pence = totalPence - (result.shillings * 12);

    return result;
}

int main() {
    double decimalPounds;

    cout << "Enter a money amount in decimal pounds: £";
    cin >> decimalPounds;

    sterling result = convertToOldSystem(decimalPounds);

    cout << "Old-style British system equivalent: £" << result.pounds << "." << result.shillings << "." << result.pence << endl;

    return 0;
}
