    
    // Factorial using Recursion
    
    #include<stdio.h>

    // function declaration/prototype

    int factorial(int n);

    int main(){

        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        printf("factorial : %d\n",factorial(n));  // function call
        printf("number : %d",n);

        return 0;
    }

// Recursive function Definiton

    int factorial(int n){
        if(n == 0){
            return 1;
        }
        int fact1 = factorial(n-1);
        int fact = fact1*n;
        return fact;   
    }