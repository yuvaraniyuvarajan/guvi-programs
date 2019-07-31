#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
ch=tolower(ch);
if(isalpha(ch))
{
     printf("Alphabet");
}

else
{
    printf("No");
}

}
