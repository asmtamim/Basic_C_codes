#include<stdio.h>
int main()
{
    long long int m,n,k,prime;

    printf("Select Range: ");
    scanf("%lld",&k);
    printf("---\n");

    for(m=2; m<=k; m++)
    {
        for(n=2; n<=m; n++){
            if(m%n==0) break;
        }
        if(m==n){
            printf("%lld\n",m);
        }
    }
    return 0;
}
