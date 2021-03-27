/*
 * 团体程序设计天梯赛
 * 2021.3.26
 * github @Lickton
 * */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, k = 1, mod;
    char a;
    cin >> n >> a;

    if ( n>= 7 )
    {
        while( !(k*k <= (n+1)/2 && (n+1)/2 < (k+1)*(k+1)) )
            k++;
        int count1 = k;
        //count1 是上半部分的行数；
        for ( int m=0; m<count1 ; m++ )//打印上半部分
        {
            for ( int i=0; i<m; i++ )
                cout << ' ';
            for (int i=0; i<2*(count1-m)-1; i++ )
                cout << a;
            printf("\n");
        }    
        
        int count2 = k - 1;
        //count2 是下半部分的行数；
        for( int m=0; m<count2; m++)//打印下半部分
        {
            for ( int i=0; i<count2-1-m; i++)
                cout << ' ';
            for ( int i=0; i<2*(m+1)+1; i++)
                cout << a;
            printf("\n");
        }
        mod = n- 2*k*k + 1;
        cout << mod << endl;
    }
    else
    {
        mod = n - 1;

        cout << a << endl;
        cout << mod << endl;
    }
    
    return 0;
}
/*
*******
 *****
  ***
   *
  ***
 *****
*******

其中 54 ~ 57 行为上半部分
    58 ~ 60 行为下半部分
*/