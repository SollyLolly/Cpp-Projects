#include <iostream>
#include <string>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 0;


    do {
        do{
            std::cout << "Welcome to our banking app\n";
            std::cout << "Enter your choice\n";
            std::cout << "1. Show Balance\n";
            std::cout << "2. Deposit Money\n";
            std::cout << "3. Withdraw\n";
            std::cout << "4. Exit\n";
            std::cin >> choice;
            std::cin.clear();
            std::cin.ignore(123, '\n');
        } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);

        switch (choice) {
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
            showBalance(balance);
            break;
        case 3: balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4: std::cout << "Thanks for using our app\n";
            break;
        }
        } while (choice != 4);

    return 0;
}
void showBalance(double balance) {
    std::cout << "Your balance is: £" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit() {

    double amount = 0;
    std::cout << "Enter amount to deposit\n";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "Not a valid amount";
        return 0;
    }

    return 0;
}
double withdraw(double balance) {

    double amount = 0;
    std::cout << "Enter amount to withdraw\n";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficent funds\n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "Invalid input\n";
        return 0;
    }
    else {
        return amount;
    }

    return amount;
}
