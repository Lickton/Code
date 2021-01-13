#include <stdio.h>
void hanoi(char A, char B, char C, int n);
int main(void)
{
    int n;
    printf("请输入要移动的块数：");
    scanf("%d", &n);
    hanoi('A', 'B', 'C', n);

    return 0;
}
void hanoi(char A, char B, char C, int n)
{
    if( n==1 )
    {
        printf("%c -> %c\n", A, C);
    }
    else
    {
        hanoi(A, C, B, n-1);
        printf("%c -> %c\n", A, C);
        hanoi(B, A, C, n-1);
    }
}