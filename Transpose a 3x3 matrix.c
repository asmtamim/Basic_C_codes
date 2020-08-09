#include<stdio.h>
int main()
{
    int mat[3][3];
    int i,j;
    printf("Elements: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nRight form of matrix:");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d ",mat[i][j]);
        }
    }
    printf("\nTranspose form of matrix:");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d ",mat[j][i]);
        }
    }
    return 0;
}
