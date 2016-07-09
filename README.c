#include<stdio.h>
#include<conio.h>
void main();
{
char c;
printf("enter the  char");
scanf("%c",&c);
if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
  printf("it is Vowel");
else
  printf("it is Consonant");
getch();
}
