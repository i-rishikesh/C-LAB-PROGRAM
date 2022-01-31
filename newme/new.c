#include <stdio.h>
int main()
{
    int matrix[3][3];
    int i,j;
    printf("This program will print a 3X3 matrix:\n\n");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("Enter the numbers row wise:");
            scanf("%d",&matrix[i][j]);
        }
    }
    int T,count;
    printf("enter the comparing value:");
    scanf("%d",&T);
    printf("\n\n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(matrix[i][j]<T)
                matrix[i][j]=0;
            else if(matrix[i][j]>=T)
                count=count+1;
                printf("no of elements greater than equar to t is%d",count);
            else if(matrix[i][j]>T)
                matrix[i][j]=1;
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSo this is the matrix form of numbers or also known as 2-D array.");
    return 0;
}