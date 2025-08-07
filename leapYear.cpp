
// Program to check a year is leapyear or not

#include<iostream>
using namespace std;

int main()
{
    int year;  // Declare a variable to store the year


    cout << " Enter the year : "; // Input year from the user 
    cin >> year;  // Read the input from user 

    // Check the year is leapYear using if-else statement
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is leap year ";
    }
    else
    {
        cout << year << " is not leap year ";
    }
    return 0;   // End the program
    
    
}