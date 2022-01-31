// Wap to enter your name city and address
// Rishikesh 2105734
#include<stdio.h>
struct address
{
    char name[15];
    char city[30];
    int pin;
};
struct emp
{
    struct address a;
    char phone[10];
};
int main()
{
    struct emp e={"Rishikesh","Ranchi",34,"834002"};
    printf("name:%s\ncity:%s\nphone:%s\npin:%d\n",e.a.name,e.a.city,e.phone,e.a.pin);
}