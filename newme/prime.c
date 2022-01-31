#include <stdio.h>
int main()
{
    int i, j, end, isPrime;
    printf("find the prime numbers between 1 to :\n ");
    printf("All prime numbers between 1 to n are : \n",end);
    scanf("%d",&end);
    for(i=2; i<=end; i++)
    {
        isPrime= 1;
        for(j=2; j<=i/2; j++)
        if(i%j==0)
        {
            isPrime= 0;
            break;
        }
    }
    if(isPrime==1)
    {
        printf("%d",i);
    }
    return 0;
}