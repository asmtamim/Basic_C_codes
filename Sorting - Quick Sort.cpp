#include<bits/stdc++.h>
using namespace std;

int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = part(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n,t,i;
    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, t-1);
    printf("Sorted array: ");
    for (i=0; i < t; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

