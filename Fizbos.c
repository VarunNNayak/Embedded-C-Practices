#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        printf("\n%d", i);
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf(" FizBos");
        }
        else
        if (i % 3 == 0)
        {
            printf(" Fiz");
        }
        else
        if (i % 5 == 0)
        {
            printf(" Bos");
        }
    }
    return 0;
}