
    #include<iostream>
    using namespace std;

    int main()
    {

        int number ;
        int original_number = number;
        int last_digit;
        int rev = 0;
    
        cout << " Enter a number : ";
        cin >> number;
        
        
        do
        {
            last_digit = number % 10;
            rev = rev * 10 + last_digit;
            number /= 10;

        }
        while(number != 0);

        cout << " Reverse of is " << rev;

        return 0;

    }
    