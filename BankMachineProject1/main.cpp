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
void menuSelect(int option);


int main(void)
{
    int option = 0;
    
    displayMenu();
    menuSelect(option);
    
    
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
    cout<<"**********"<<endl;

}

// Function : menuSelect
// date :   December 15th 2022
// comment : Using switch case to let user select option from menu

void menuSelect(int option)
{
    
}
