#include<stdio.h>
int func();
int main()
{
    int factorial;
    factorial=func();
    return 0;
}

int func()
{
    int a,b,c;
    a=1;
    scanf("%d",&c);
    for(b=c;b>=1;b--){
        a=a*b;
    }
    printf("Factorial value: %d\n",a);
}
