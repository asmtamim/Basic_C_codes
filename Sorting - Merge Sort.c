#include<stdio.h>
#include<stdlib.h>

void mergeArray(int data[],int l,int m,int r)
{
    int i,j,k,nl,nr;
    nl=m-l+1;
    nr=r-m;
    int left[nl],right[nr];
    for(i=0; i<=nl; i++){
        left[i]=data[l+i];
    }
    for(i=0; i<=nr; i++){
        right[i]=data[m+1+i];
    }

    i=0; j=0; k=l;
    while(i<nl && j<nr){
        if(left[i]<right[j]){
            data[k]=left[i];
            i+=1;
            k+=1;
        }
        if(left[i]>right[j]){
            data[k]=right[j];
            j+=1;
            k+=1;
        }
    }
    while(i<nl){
        data[k]=left[i];
        i+=1;
        k+=1;
    }
    while(j<nr){
        data[k]=right[j];
        j+=1;
        k+=1;
    }
}

void mergeSort(int data[],int l,int r)
{
    int m=0;
    if(l<r){
        m=(l+r)/2;
        mergeSort(data,l,m);
        mergeSort(data,m+1,r);
        mergeArray(data,l,m,r);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int data[n];
    printf("Enter data: ");
    for(i=0; i<n; i++){
        scanf("%d",&data[i]);
    }
    mergeSort(data,0,n-1);

    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ",data[i]);
    }
    return 0;
}
