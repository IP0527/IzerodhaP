
    #include<stdio.h>

    // Fibonacci sequence......

    //function prototype

    int fib(int n);

    int main(){
        int n;
        printf("Enter number :");
        scanf("%d",&n);
        //printf("fib of %d is : %d",n,fib(n));
        for(int i=0; i<=n;i++){
            printf("fibonacci sequence : %d\n", fib(i)); // function call
             

        }
        


        return 0;
    }

    //function definition 

    int fib(int n){

        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        int fibNm1 = fib(n-1);
        int fibNm2 = fib(n-2);
        int fibN = fibNm1 + fibNm2;
        return fibN;

    }