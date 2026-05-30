#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) = 0;
};

class PayPal : public Payment {
public:
    void pay(double amount) {
        cout << "Paid $" << amount << " using PayPal\n";
    }
};

class CreditCard : public Payment {
public:
    void pay(double amount) {
        cout << "Paid $" << amount << " using Credit Card\n";
    }
};

class Stripe : public Payment {
public:
    void pay(double amount) {
        cout << "Paid $" << amount << " using Stripe\n";
    }
};

int main() {
    Payment* p;

    p = new PayPal();
    p->pay(100.50);

    p = new CreditCard();
    p->pay(250.75);

    p = new Stripe();
    p->pay(500.00);

    delete p;

    return 0;
}