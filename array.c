#include <stdio.h>
void main()
{
    int a[10],sum;
    printf("numbere at position 1:");
    scanf("%d",&a[1]);
    printf("num at position 2:");
    scanf("%d",&a[2]);
    sum=a[1]/a[2];
    printf("sum of two array:%d",sum);
}