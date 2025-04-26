#include <iostream>

using namespace std;

class account{
    
    public:
    int balance;
    account(int initialize_balance){
        balance = initialize_balance;
    }

    void deposit(int amount){
        balance += amount;
    }

    void withdrawl(int amount){
        if(amount <= balance ){
            balance -= amount;
        }
        else{
            cout<<"Insuficiennt Amount"<<endl;
        }
    }

    void display(){
        cout<<"Your account balance =  "<<balance<<" PKR"<<endl;
    }

};

class savings_account : public account{
    int interest_rate = 5;
    public:

    savings_account(int initialize_balance) : account(initialize_balance){}

    void apply_interest(){
        int interest = (balance * interest_rate) / 100;
        balance -= interest;
    }
    
};

class CurrentAccount : public account {
    int fee = 500; 
public:
    CurrentAccount(int initialBalance)
        : account(initialBalance) {}

    void deductFee() {
        balance -= fee; 
    }

};

int main(){

    savings_account mySavings(10000);
    CurrentAccount myCurrent(8000);

    cout<<"== Savings Account =="<<endl;
    mySavings.deposit(2000);
    mySavings.apply_interest();
    mySavings.display();

    cout<<"== Current Account =="<<endl;
    myCurrent.withdrawl(5000);
    myCurrent.deductFee();
    myCurrent.display();
}