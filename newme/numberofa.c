/**Rishikesh
2105734
number of a*/

#include <stdio.h>

int main()
{
    char a[]="Rishikesh",b[]="Nice",c[]="HelloWorld",d[]="fml",e[]="I want to leave this class right now";
    int co=0;
    char *p[5];
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<p[i][j];j++)
       {
          co+=p[i][j]=='a';
       }
    }
    printf("%d",co);
}