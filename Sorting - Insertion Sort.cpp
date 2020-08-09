#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp,data[50];
    scanf("%d",&n);
    printf("Enter data: ");
    for(i=0; i<n; i++){
        scanf("%d",&data[i]);
    }
    for(i=1; i<n; i++){
        temp=data[i];
        j=i-1;
        while(j>=0 && data[j]<temp){
            data[j+1]=data[j];
            j-=1;
        }
        data[j+1]=temp;
    }
    for(i=0; i<n; i++){
        printf("%d ",data[i]);
    }

    return 0;
}
