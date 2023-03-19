#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf ("Enter 4 digits \n");
    scanf("%d%d%d%d" , &a,&b,&c,&d);
    if (a > b && a > c && a > d)
    {
        printf ("Largest is %d \n",a );
    }
    else if( b>a && b> c && b >d)
    {
        printf ("Largest is %d ", b);
    }
    else if (c>a && c>b && c>d)
    {
       printf ("Largest is %d", c);
    }
    else 
    printf ("Largest is %d",d);
    return 0;
}