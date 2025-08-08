// Reverse of a number 

    #include<iostream>    // include input/output stream
    using namespace std;

    int main()
    {

        int number ;       // take input variable
        int last_digit;
        int rev = 0;      // take input to store the reverse number 
        
        
        cout << " Enter a number : ";   // take input numbr from user    
        cin >> number;           // Read input from user 
        int original_number = number;
        
        
        do
        {
            
            last_digit = number % 10;        // get last digit of the number 
            rev = rev * 10 + last_digit;     // Expression for store the last digit
            number /= 10;                 // Remove last digit 

        }
        while(number != 0);

        cout << " Reverse of " << original_number << " is " << rev;

        return 0; // End of Program

    }
