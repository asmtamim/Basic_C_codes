#include<bits/stdc++.h>
using namespace std;

void insertion(int data[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++){
        temp=data[i];
        j=i-1;
        while(j>=0 && data[j]>temp){
            data[j+1]=data[j];
            j-=1;
        }
        data[j+1]=temp;
    }
}

int main()
{
    int n,i,data[50];
    printf("Enter number of array: ");
    scanf("%d",&n);
    printf("Enter data: ");
    for(i=0; i<n; i++){
        scanf("%d",&data[i]);
    }
    insertion(data,n);

    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ",data[i]);
    }

    return 0;
}
