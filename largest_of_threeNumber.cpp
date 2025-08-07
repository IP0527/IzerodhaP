
// Largest of three numbers

#include<iostream> // Include input/output stream library
using namespace std;

int main()
{
    
    int a, b, c;  // Declare variable to store the number a, b and c
     
    // Input three numbers
    cout << " Enter three numbers : ";
    
    
    // Read the input from user
    cin >> a >> b >> c;
    
    // comparing numbers using else if statement
    if(a > b && a > c)
    {
        cout << " Largest is : " << a;
    }
    else if(b > a && b > c)
    {
        cout << " Largest is : " << b;
    }
    else if(c > a && c > b)
    {
        cout << " Largest is : " << c;
    }
    else
    {
        cout << " All the three are Equal ";
    }
    
    return 0;  // End the Program

    

}