#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n, q, j;                                   //计数器大集合
    int delta;                                        //所输入字母 与 ‘A’ + 中间所有数总共几个
    char aword;                                       //要求输入的字母，即打印最后一行的中间字母
    char ch[26] = "0";                                //初始化包含26个字母的数组
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
        for(j=n-1; (n-1)-(int)fabs(j)>=0; j--)          //应当注意数组越界问题，否则会“烫烫烫烫烫烫烫烫烫烫烫烫”！！！
            printf("%c", ch[(n-1)-(int)fabs(j)]);
        for(i=1; i<=delta-n; i++)
            printf(" ");
        printf("\n");
    }

    return 0;
}