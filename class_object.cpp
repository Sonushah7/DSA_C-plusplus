#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);

    cout << "Balance: " << account.getBalance() << endl;

    return 0;
}
