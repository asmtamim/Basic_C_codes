/* Fibonacci Series - RECURSION */

#include<stdio.h>
int fib();
int main()
{
    int a,b,fibonacci;
    scanf("%d",&b);
    for(a=1; a<=b; a++){
        fibonacci=fib(a);
        printf("%d, ",fibonacci);
    }
    return 0;
}
int fib(int x)
{
    if(x<=2){
        return 1;
    }
    return(fib(x-1)+fib(x-2));
}
