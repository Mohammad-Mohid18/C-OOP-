#include <iostream>

using namespace std;

int main()
{
    double balance, amount;
    int choice;
    cout << "Enter your initial balance: ";
    cin >> balance;
    cout <<"choose 1 for account statement"<<endl<<"choose 2 for deposit"<<endl<<"choose 3 for withdraw"<<endl<<"choose 4 to exit"<<endl;
    cin>> choice;
    switch (choice) 
    {
    case 1:
        cout << "Your account balance is: $" << balance << endl;
        break;
    
    case 2:
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Your new balance is: $" << balance << endl;
        break;
        
    case 3:
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Your new balance is: $" << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
        break;
        
    case 4:
        cout << "Thank you for using our ATM. Goodbye!" << endl;
        return 0;  

    default:
        break;
    }

}