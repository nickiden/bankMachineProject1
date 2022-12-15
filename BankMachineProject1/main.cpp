// PROJECT  : BackMachineProject#1
// FILE     : main.cpp
// DATE     : Dec 15th, 2002
// PRPGRAMMER   :   Nick Iden
// COMMENT  :
//              This is a simple application that displays a menu, accept user input, and
//              verify the data entered is acceptable.
//              Steps:
//                      1. Create a simple menu function
//                      2. Allow user to add funds
//                      3. Allow user to withdrawl funds
// NOTE : later versions will include user log in and log out, remembering user acount info, and transfers.


#include <iostream>
using namespace std;

//function prototypes
void displayMenu();
void menuSelect(int option,float& balance);


int main(void)
{
    int option = 0;
    float balance = 0;
    
    do
    {
        // display menu
        displayMenu();
        
        // prompt user for selection
        cout<<"Select an option: "<<endl;
        cin>> option;
        
        // check user input valid
        if (option >= 1 && option <= 4)
        {
            //call menuSelect to manage the user option
            menuSelect(option, balance);
        }
        else
        {
            cout<< "please enter a valid menu number"<<endl;
        }
        
        
    } while(option != 4);
    return 0;
}





// Function : displayMenu
// date :   December 15th 2022
// comment : Menu displayed for user.


void displayMenu()
{
    cout<<"**********"<<endl;
    cout<<"Thank you for using Banko Please select a banking option: "<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit into account"<<endl;
    cout<<"3. Withdraw from account"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"**********"<<endl;

}

// Function : menuSelect
// date :   December 15th 2022
// comment : Using switch case to let user select option from menu

void menuSelect(int option, float& balance)
{
    float depositAmount = 0.00;
    float newSumDeposit = 0.00;
    float withdraw = 0.00;
    
    switch (option) {
        case 1:cout<< "Your balance is " << balance << "$" << endl;
            break;
        case 2:cout<< "Deposit amount: "<< endl;
            cin >> depositAmount;
            newSumDeposit = depositAmount + balance;
            balance = newSumDeposit;
            break;
        case 3:cout<< "Withdraw amount: "<< endl;
            
            cin >> withdraw;
            
            if (withdraw <= balance)
            {
                balance -= withdraw;
            }
            else
            {
                cout<< "Sorry, not enough funds. Please deposit more money "<< endl;
            }
            break;
            
        default:
            break;
    }
    
}
