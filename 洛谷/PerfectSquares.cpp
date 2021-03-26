/*
 * 洛谷
 * 2021.3.25
 * github @Lickton
 * */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int num = INT_MIN;
    int a = 0;
    cin >> n;
    

    for ( int i = 0; i < n; i++ )
    {
        cin >> a;
        if ( (int)(sqrt(a) * (int)sqrt(a)) != a )
            num = max(num, a);
    }
    
    cout << num << endl;

    return 0;
}