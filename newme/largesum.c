//2105734 Rishikesh
#include <stdio.h>
int LARGE_SUM(int*a,int*b,int n)
{
    int i, s1=0 ,s2=0;
    for(i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if(s1==s2)
        return 0;
    else if(s1>s2)
        return 1;
    else
        return 2;
}
int main()
{
    int x[20],y[15],g;
    
    g = LARGE_SUM(x,y,10);
    
    if(!g)
        printf("BOYH SUM ARE EQUAL");
    else if(g==1)
        printf("X IS GREATER THAN Y");
    else
        printf("Y IS GREATER THAN X");
        
    return 0;
}