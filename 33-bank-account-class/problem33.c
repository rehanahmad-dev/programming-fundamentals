#include <iostream>
#include <string>

using namespace std;

class BankAccount {
 private:
  string accountNumber;
  string accountHolder;
  int balance;

 public:
  BankAccount(const string& accNumber, const string& accHolder,
              int initialBalance) {
    accountNumber = accNumber;
    accountHolder = accHolder;
    balance = initialBalance;
  }

  void deposit(int amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposited Rs" << amount << " successfully.\n";
    } else {
      cout << "Insufficient funds or invalid amount.\n";
    }
  }

  void withdraw(int amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawn: Rs" << amount << " successfully.\n";
    } else {
      cout << "\nCannot withdraw Rs" << amount
           << "(Insufficient funds or invalid amount).\n";
    }
  }

  void displayBalance() const {
    cout << "\nAccount Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: Rs" << balance << "\n";
  }
};

int main() {
  BankAccount account("9897084060", "Hanan Anwar", 10000.0);

  account.displayBalance();

  account.deposit(6000.0);

  account.displayBalance();

  account.withdraw(4000.0);

  account.displayBalance();

  account.withdraw(20000.0);

  return 0;
}
