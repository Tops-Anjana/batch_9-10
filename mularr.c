#include<stdio.h>
int main(){
    int row,col,m,n,arr1[50][50],arr2[50][50],mul[50][50];
    printf("Enter the value of rows");
    scanf("%d",&m);
    printf("Enter the value of col");
    scanf("%d",&n);
    printf("enter the value of array1:");
    for(row=0;row<m;row++){
        for(col=0;col<n;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the value of second arry:\n ");
    for(row=0;row<m;row++){
        for(col=0;col<n;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("Printing the array1:\n");
    for(row=0;row<m;row++){
        printf("\n");
        for(col=0;col<n;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
    printf("Printing the array2:\n");
    for(row=0;row<m;row++){
        printf("\n");
        for(col=0;col<n;col++){
            printf("%d \t",arr2[row][col]);
        }
    }
    for(row=0;row<m;row++){
        for(col=0;col<n;col++){
             mul[row][col]=0;
            for(int k=0;k<n;k++){
                mul[row][col] += arr1[row][k] * arr2[k][col];
            }
        }
    }
    printf("Multipication is:\n");
    for(row=0;row<m;row++){
        printf("\n");
        for(col=0;col<n;col++){
            printf("%d \t",mul[row][col]);
        }
    }
} 