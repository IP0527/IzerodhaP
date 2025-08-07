
// Simple ATM Menu 

#include<iostream>     // Include input/output stream library
using namespace std;

int main()
{
   int choice;
   float Balance = 50000.0, amount;
   cout << "======= ATM MENU ========\n ";
   cout << " 1. Check Balance \n ";
   cout << " 2. Deposit\n ";
   cout << " 3. Withdraw\n ";
   cout << " 4. Exit\n ";
   cout << " Enter your choice : ";
   cin >> choice; 
   switch(choice)
   {
        case 1 : 
            cout << " your Balance is : " << Balance; 
            break;
        case 2 :
            cout << " Enter your Deposit amount : "; 
            cin >> amount; 
            Balance += amount;
            cout << " Deposite! New Balance : " << Balance;
            break;

        case 3 :
            cout << " Enter your withdraw amount : ";
            cin >> amount;
            if(amount <= Balance)
            {
                Balance -= amount;
                cout << " Withdraw! New Balance : " << Balance;
            }
            else
            {
                cout << " Insufficient Balance ";
            }
            break;

        case 4 : 
            cout << "Thankyou ! Visit Again ";
            break;

        default : 
            cout << " Invalid choice";
            
   }

   return 0;




}