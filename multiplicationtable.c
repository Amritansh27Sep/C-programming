#include <stdio.h>

int main()
{
    int n;
    printf ("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int a = 1;
        a = n * i;
        printf(" %d*%d=%d\n",n,i,a);
    }
    return 0;
}