//WAP to find out largest between n number and another function to count the nummber of leaders
//Rishikesh 2105734
#include<stdio.h>

void largest(int n){
    int max=0,num;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&num);
        if(num>max)
            max=num;
    }
    
    printf("The largest number is %d ",max);

}


void leader(int n){
    int count=0,max=0,num;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d: ",i+1);
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
            count++;
        }
    }
    printf("The number of leaders is: %d",count);
}

void main()
{

    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);

    printf("\nDisplaying the largest number\n");
    largest(n);

    printf("Displaying the number of leaders\n");
    leader(n);

}