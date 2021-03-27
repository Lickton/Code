/*
 * 团体程序设计天梯赛
 * 2021.3.26
 * github @Lickton
 * */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    for( int i=0; i<10; i++ )
    {
        int count = 0;
        for( int k=0; k<len; k++)
        {
            if( n[k] - '0' == i )
                count++;
        }
        if(count > 0)
            cout << i << ':' << count << endl;
    }

    return 0;
}