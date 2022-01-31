// Rishikesh 2105734
#include <stdio.h>

int sum_com(int*a,int*b,int n)
{
   int s1=0,s2=0;
   for(int i=0;i<n;i++)
   {
      s1+=a[i];
      s2+=b[i];
   }
   return s1==s2?0:((s1>s2)?1:2);
}
int main()
{
   int a[50];int b[60],n;
   printf("enter a number:");
   scanf("%d",&n);
   printf("Enter array elements :");
   for(int i=0;i<5;i++)
   {
      scanf("%d",&a[i]);
      scanf("%d",&b[i]);
   }
   printf("%d", sum_com(a,b,n));
}