#include<stdio.h>
int func();
int main()
{
    int a,factorial;
    scanf("%d",&a);
    factorial=func(a);
    printf("Factorial value: %d",factorial);
    return 0;
}
int func(int x)
{
    if(x<1){
        return 1;
    }
    return x*func(x-1);
}
