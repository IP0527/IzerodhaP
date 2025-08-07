// To Check Positive, Negative, or Zero

#include<iostream> // include input/output stream library
using namespace std;

int main()
{
    int num;  // Declare a variable to store the number 

    // Ask the user to enter a number 
    cout << " Enter the number : ";
    cin >> num;  // Read input from the user 

    // Check a number greater than zero or smaller than zero
    if(num > 0)
    {
        cout << num << " Positive ";
    }
    else if(num < 0)
    {
        cout << num << " Negative ";
    }
    else
    {
        cout << " Zero ";
    }
    return 0;  // End the program
}
