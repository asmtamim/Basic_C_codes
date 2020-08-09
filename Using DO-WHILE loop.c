#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&m);
    printf("---\n");
    do{
        for(n=1;n<m;n++){
            printf("%d\n",n);
        }
    }
    while(n<m);
    return 0;
}
