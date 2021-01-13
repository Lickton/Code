#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n, q, j;
    int delta;
    char aword;
    char ch[26] = "0";
    for(q=0; q<26; q++)
        ch[q] = 'A' + q;
    printf("Please input a word:");
    scanf("%c", &aword);
    printf("\n");

    delta = aword - ch[0] + 1;
    for(n=1; n<=delta; n++)
    {
        for(i=1; i<=delta-n; i++)
            printf(" ");
        for(j=n-1; (n-1)-(int)fabs(j)>=0; j--)
            printf("%c", ch[(n-1)-(int)fabs(j)]);
        for(i=1; i<=delta-n; i++)
            printf(" ");
        printf("\n");
    }

    return 0;
}