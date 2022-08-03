#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char *s;
 int i,len;
 printf("enter a string\n");
 gets(s);
 len=strlen(s);
 printf("the reversed string is\n");
 for(i=len;i>=0;i--)
 {
  printf("%c",*(s+i));
 }
getch();
} 
