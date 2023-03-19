#include<stdio.h>

int main()
{
	char c;
    printf ("Enter a character: \n");
    scanf("%c", &c);
    if (c >= 97 && c <=122)
  	printf ("Lower case ");
    else 
    printf ("Not a lower case char");
    
}