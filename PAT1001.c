/*
 * PAT
 * 2021.2.26
 * github @Lickton
 * */
#include <stdio.h>
int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    while(n!=1)
    {
        if( n%2==0 )
            n = n / 2;
        else
            n = (3*n+1) / 2;
        count++;
    }
    printf("%d\n", count);

    return 0;
}