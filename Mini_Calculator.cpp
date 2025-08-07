
// Mini_Calculator

#include<iostream>   // Include input/output stream library
using namespace std;

int main()
{
    float a, b;    // declare a, b varirable for store the number 
    char op;      // delare op variable for store the operator
    
    // Take input two numbers from user
    cout << " Enter two number : ";
    cin >> a >> b;   // Read input from user

    // Take input operator from user
    cout << " Enter operator (+, -, *, /, %, **) : ";
    cin >> op;  // Read input operator from user
    
    // Calculating numbers using switch statement
    switch(op)
    {
        case '+' : cout << " Result : " << a + b;
            break;
        case '-' : cout << " Result : " << a - b;
            break;
        case '*' : cout << " Result : " << a * b;
            break;
        case '/' : 
            if(b != 0)
            {
                cout << " Result : " << a / b;
            }
            else
            {
                cout << " Error : divisible by zero";
            }
            break;
        //case '%' : cout << " Result : " << a % b;
           // break;

        default : cout << " Invalid operator! ";

    }

    return 0;   // End the program
    
}