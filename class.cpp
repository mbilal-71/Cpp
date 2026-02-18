// #include<iostream>

// int main(){
//    std :: cout<< "Hello World";
//    return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    int choice;
    double balance = 10000;

    cout << "===== ATM MACHINE =====" << endl;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Wrong PIN. Access denied." << endl;
        return 0;
    }

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Balance: " << balance << endl;
                break;

            case 2: {
                double deposit;
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                balance += deposit;
                cout << "Amount deposited successfully." << endl;
                break;
            }

            case 3: {
                double withdraw;
                cout << "Enter amount to withdraw: ";
                cin >> withdraw;

                if (withdraw > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    balance -= withdraw;
                    cout << "Please collect your cash." << endl;
                }
                break;
            }

            case 4:
                cout << "Thank you for using ATM." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}

