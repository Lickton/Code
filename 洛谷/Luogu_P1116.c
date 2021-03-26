/*
 * 洛谷
 * 2021.2.2
 * github @Lickton
 * */
#include<stdio.h>
int main(void)
{
    int n, i, j, temp;
    int count = 0;
    scanf("%d", &n);
    int sort[n];  
    for(i=0; i<n; i++)
        scanf("%d", &sort[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(sort[j] > sort[j+1])
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
                count++;
            }
        }
    }
    printf("%d", count);
    
    return 0;   
}