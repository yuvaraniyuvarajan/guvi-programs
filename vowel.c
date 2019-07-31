#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
ch=tolower(ch);
if(isalpha(ch))
{
switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     printf("Vowel");
     break;
    default:
      printf("Consonent");
    
}
}
else
{
    printf("Invalid");
}

}
