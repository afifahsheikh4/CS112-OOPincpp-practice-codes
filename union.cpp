#include <iostream>
using namespace std;

// Union is a user-defined data type in which all members share the same memory location.
// This means writing to one member will OVERWRITE the value of the other member.
union Payment
{
    int cashAmount;   // Stores cash payment amount
    int cardNumber;   // Stores card number used for payment
};

int main()
{
    Payment payment;

    // Assign card number to the union
    payment.cardNumber = 521234;

    // Assign cash amount to the same union
    // This assignment OVERWRITES the previously stored cardNumber
    payment.cashAmount = 200;

    // Displays the cash amount (valid, because cashAmount was written last)
    cout << "Order paid via cash. Amount: "
         << payment.cashAmount << endl;

    // Attempts to display card number
    // This value is INVALID / UNPREDICTABLE because it was overwritten
    cout << "Order paid via Card. Card Number: "
         << payment.cardNumber << endl;

    return 0;  // Program ends
}