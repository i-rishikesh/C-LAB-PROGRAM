// wap tocopy a __STRINGI
// Rishikesh 2105734
#include <stdio.h>
#include <string.h>
int main()
{
  char  i=0,source[100], destination[100];

  printf("Input a string\n");
  gets(source);
 while(source[i]!='\0'){
 destination[i]=source[i++];
 }
 destination[i]='\0';

  printf("Source string: %s\n", source);
  printf("Destination string: %s\n", destination);

  return 0;
}