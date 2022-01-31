#include <stdio.h>

int main()
{
   char s[100]="Rishikesh";
   int c=0,count=0;
   while(s[c]!='\0')
   {
      if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
      c++;
   }
   char arr[100];
   int i=0,k=4;c=0;
   while(i<100)
   {
      arr[i]=s[c];
      c++;
      int j;
      for( j=1;j<=k;j++)
      arr[i+j]=' ';
      i=i+j;
   }
   char ar[100];
   i=0;c=0;
   while(i<100)
   {
      ar[i]=s[c];
      c++;
      int j;
      for( j=1;j<=k;j++)
      ar[i+j]='R';
      i=i+j;
   }
   printf("No. of vowels: %d\n",count);
   printf("%s\n",arr);
   printf("%s",ar);
}