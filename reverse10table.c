#include <stdio.h>

int main()
{
    for (int i = 10; i>=1; i--)
    {
        int a = 10;
        int n = a * i;
        printf("%d * %d = %d \n",a,i,n);
    }
    return 0;
}