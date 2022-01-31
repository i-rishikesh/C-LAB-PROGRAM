//sum of three function 
// Rishikesh 2105734
#include <stdio.h>
int add(int a,int b,int c);
int main()
{
    printf("Enter three numbers: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("The sum is: %d",add(a,b,c));
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}