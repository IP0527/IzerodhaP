
    // Multiplication Table

    #include<iostream>  // include input/output stream
    using namespace std;

    int main()
    {

        int n;  // declare a variable to store input
        cout << " Enter a number : ";  // enter number from the user
        cin >> n;   // Read input from user

        // using  for loop 
        for(int i=1; i<=10; i++)
        {
            cout << n << "X" << i << "=" << n*i << endl;
        }

        return 0;     // End of Program
    } 