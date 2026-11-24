
#include <iostream>
#include <string>

// Part 2 — Mini Bank
// Jaylen Chae

struct Account {
    std::string name;
    double balance;
};

void printAccount(const Account& a) {
    std::cout << "Account Holder: " << a.name << "\n";
    std::cout << "Balance: $" << a.balance << "\n";
}

int main() {
    Account account1 = {"Jaylen", 6127.24};
    Account account2 = {"Charles", 2500.50};

    std::cout << "Mini Bank Accounts:\n";

    printAccount(account1);
    printAccount(account2);

    return 0;
}