#include<stdio.h>
int main()
{
    int x,i,j,temp,data[50];
    scanf("%d",&x);
    printf("Enter data: ");
    for(i=0; i<x; i++){
        scanf("%d",&data[i]);
    }
    printf("inputed data: ");
    for(i=0; i<x; i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    for(i=0; i<x-1; i++){
        for(j=0; j<x-1; j++){
            if(data[j+1]<data[j]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("data sorted: ");
    for(i=0; i<x; i++){
        printf("%d ",data[i]);
    }
    return 0;
}
