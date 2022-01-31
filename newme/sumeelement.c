/*Rishikesh 2105734
Sum of Elements*/

#include<stdio.h>
int main()
{
   int arr[5],sum=0;
   int *ptr;
   printf("Enter array elements :");
   for(int i=0;i<5;i++)
   scanf("%d",&arr[i]);
   ptr = arr;
   for(int i=0;i<5;i++) 
   {
      sum = sum + *ptr;
      ptr++;
   }
   printf("\nThe sum is: %d",sum);
}