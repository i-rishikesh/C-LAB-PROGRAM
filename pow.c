//Wap to find x to power y
// 2105734 Rishikesh
#include<stdio.h>

int power(int n, int p){

    if(p==0)
        return 1;
    else    
        return n*power(n,p-1);
}
void main()
{

    int n,p;
    printf("enter the number and the power: ");
    scanf("%d %d",&n,&p);
    int pow=power(n,p);
    printf("\nThe value is: %d",pow);

}