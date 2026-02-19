#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }

        //getter
        double getBalance() const {
            return balance;
        }

        //Method to deposit money
        void deposit(double amount){
            if(amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount."
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && amount <= balance) {
                balance -= amount;
            }else {
                cout << "Invalid withdrawn amount." << endl;
            }
        }
};

int main(){

    BankAccount myAccount("22310827", 500);

    myAccount.getBalance;

    myAccount.deposit(200);
    myAccount.withdraw(10);
    return 0;
}

// Encapsulation -> wrapping data and methods together inside a single unit i.e class and restricting direct access to the data.
// Encapsulation is achieved using access modifiers -> private(hidden data) and public (accessible functions).