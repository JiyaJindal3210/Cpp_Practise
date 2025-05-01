/*
#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolder;
        double balance;

    public:

        BankAccount(){

        }

        string getDeposit(double amount){
            if(amount>0){
                this->balance += amount;
                return "Deposit Successfull!";
            }
            else{
                return "Incorrect Amount!Please enter correct amount";
            }
        }

        string getWithdraw(double amount){
            if(this->balance>=amount){
                this->balance -= amount;
                return "Withdrawal Successfull!";
            }
            else{
                return "Insufficient amount!" ;
            }
        }

        double getBalance(){
            return balance;
        }

        void setAccountHolderName(string name){
            this->accountHolder = name;
        }
        
};

void menu(){
    cout << "Choose a Option : " << endl;
    cout << "1. Deposit Money " << endl;
    cout << "2. Withdraw Money " << endl;
    cout << "3. Check Balance " << endl;
    cout << "4. Exit " << endl;
    cout << endl;
}

int main() {

    cout << "Welcome to the Bank System!" << endl;
    cout << endl;
    string name;
    cout << "Enter Account Holder Name: " ;
    cin >> name;
    cout << endl;

    BankAccount bank;
    bank.setAccountHolderName(name);

    bool isRunning = true;
    
    menu();
    while(isRunning){
        int choice;
        cout << "Enter choice: " ;
        cin >> choice;
        cout << endl;

        double amount;

        switch(choice){
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                cout << bank.getDeposit(amount) << endl;
                cout << endl;
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                cout << bank.getWithdraw(amount) << endl;
                cout << endl;
                break;

            case 3:
                cout << "Current Balance: " << bank.getBalance() << endl;
                cout << endl;
                break;

            case 4:
                cout << "Thank you for using our Bank System!" << endl;
                cout << endl;
                isRunning = false;
                break;
            
            default:
                cout << "Invalid choice, Kindly enter correct choice " << endl;
                cout << endl;
                break;
        }
    }
}
*/

#include <iostream>
#include <vector>
using namespace std;

class BankAccount{
    private:
        string accountHolder;
        double balance;
        int pin;
        vector<string> transactionHistory;

    public:
        BankAccount(string name , double initialBalance , int pin){
            accountHolder = name;
            this->pin = pin;
            if(initialBalance >= 0){
                balance = initialBalance;
            }
            else{
                balance = 0;
                cout << "Setting initial balance to 0 due to given zero balance" << endl;
            }
        }

        bool checkPin(int enteredPin){
            return pin == enteredPin;
        }

        void deposit(double amount){
            if(amount>0){
                balance += amount;
                transactionHistory.push_back("Deposited : Rs " + to_string(amount));
                cout << "Deposit Successful! New Balance: Rs " << balance << endl;
            }
            else {
                cout << "Deposit amount must be positive!" << endl;
            }
        }

        void withdraw(double amount){
            if(amount>0 && balance >= amount){
                balance -= amount;
                transactionHistory.push_back("Withdrew : Rs " + to_string(amount));
                cout << "Withdrawal Successful! New Balance : Rs " << balance << endl;
            }
            else{
                cout << "Invalid amount or Insufficient balance" << endl;
            }
        }

        double getBalance(){
            return balance;
        }

        void display(){
            cout << "Account Holder : " << accountHolder << endl;
            cout << "Current Balance : Rs " << balance << endl; 
        }

        void showTransactionHistory(){
            cout << "Transaction History for " << accountHolder << " : " << endl;
            for(string transaction : transactionHistory){
                cout << transaction << endl;
            } 
        }

};

int main() {
    int numberOfAccounts;
    cout << "Enter the number of bank accounts to create :";
    cin >> numberOfAccounts;

    vector<BankAccount> accounts;

    for(int i=0;i<numberOfAccounts;i++){
        string name;
        double initialBalance;
        int pin;

        cout << "Enter Details for Account " << i+1 << endl;
        cout << "Account Holder Name : ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter initial balance : ";
        cin >> initialBalance;
        cout << "Set a 4-digit PIN : ";
        cin >> pin;

        accounts.push_back(BankAccount(name,initialBalance,pin));
    }

    int choice , accountNo , enteredPin;
    double amount;

    while(true){
        cout << "Select an account(1-" << numberOfAccounts << "):";
        cin >> accountNo;
        if(accountNo<1 || accountNo>numberOfAccounts){
            cout << "Invalid account selection" << endl;
            continue;
        }

        accountNo--;
        cout << "Enter PIN : ";
        cin >> enteredPin;

        if(!accounts[accountNo].checkPin(enteredPin)){
            cout << "Incorrect PIN! Try Again." << endl;
            continue;
        }

        do {
            cout << "Choose a Option : " << endl;
            cout << "1. Deposit Money " << endl;
            cout << "2. Withdraw Money " << endl;
            cout << "3. Check Balance " << endl;
            cout << "4. Show Transaction History " << endl;
            cout << "5. Switch Account " << endl;
            cout << "6. Exit " << endl;
            cout << "Enter choice : " << endl;
            cin >> choice;

            switch(choice){
                case 1:
                    cout << "Enter deposit amount : ";
                    cin >> amount;
                    accounts[accountNo].deposit(amount);
                    break;
                case 2:
                    cout << "Enter withdrawal amount:" ;
                    cin >> amount;
                    accounts[accountNo].withdraw(amount);
                    break;
                case 3:
                    cout << "Current Balance: Rs " << accounts[accountNo].getBalance() << endl;
                    break;
                case 4:
                    accounts[accountNo].showTransactionHistory();
                    break;
                case 5:
                    cout << "Switching account..." << endl;
                    break;
                case 6:
                    cout << "Thank you for using our Bank System!" << endl;
                    return 0;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        }while(choice != 5);
    }
    return 0;
}