#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    for(x=1; x<=y; x++){
        int num,i;
        printf("Enter a number: ");
        scanf("%d",&num);
        for(i=2; i<=num-1; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            printf("%d is a Prime number\n",num);
        }
        else{
            printf("%d is not a Prime number\n",num);
        }
    }
    return 0;
}
