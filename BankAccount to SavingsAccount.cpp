#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    string holderName;

public:
    void getAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Account Holder Name: ";
        cin >> holderName;
    }
};

class SavingsAccount : public BankAccount {
private:
    double balance;
    double interest;

public:
    void getBalance() {
        getAccount();
        cout << "Enter Balance: ";
        cin >> balance;

        interest = balance * 0.05;   // 5% interest
    }

    void display() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest (5%): " << interest << endl;
    }
};

int main() {
    SavingsAccount s;
    s.getBalance();
    s.display();
    return 0;
}