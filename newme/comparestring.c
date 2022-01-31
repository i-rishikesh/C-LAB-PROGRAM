// Compare 2 string retuen (-1) if they match else return an integer value mentioning the value where first mismatch occurs
//Rishikesh 2105734

#include<stdio.h>
#include<string.h>


void main()
{
    char str1[10],str2[10];
    printf("\nEnter the string 1: ");
    gets(str1);
    printf("\nEnter string 2: ");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("\n\n-1");
    
    else{
        for (int i = 0; i < strlen(str1); i++)
        {
            if(str1[i]!=str2[i])
                printf("\nAt index %d the strings are different",i);
        }
        
    }

}