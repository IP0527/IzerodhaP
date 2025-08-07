/
// Program for check the number Even or Odd.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() 
{
    
    int num;  // Declare a variable to store the number 
    
    // Ask the user to Enter a number
    cout << "Enter your number :" ;
    cin >> num;   // Read input from the user
    
    // Check if the number is divisible by 2
    if(num % 2 == 0)
    {
        cout << num << " is Even Number ";
    }
    else
    {
        cout << num << " is Odd Number ";
    }
    
    return 0;  // End the program
    
}