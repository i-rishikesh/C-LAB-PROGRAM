// Wap to find out power
//Rishikesh 2105734
#include<stdio.h>
int power(int n, int p);
void main()
{
    int n,p;
    printf("enter the base and the exponent: ");
    scanf("%d %d",&n,&p);
    int pow=power(n,p);
    printf("The value is: %d",pow);
}
int power(int n, int p)
{
    if(p==0)
    return 1;
    else    
    return n*power(n,p-1);
}