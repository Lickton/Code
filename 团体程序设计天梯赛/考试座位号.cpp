/*
 * 团体程序设计天梯赛
 * 2021.3.29
 * github @Lickton
 * */
#include <bits/stdc++.h>
using namespace std;
struct info
{
    string Num;
    int Text, Exam;
};

int main()
{
    int n, m;
    cin >> n;
    vector<info> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i].Num >> a[i].Text >> a[i].Exam;
    cin >> m;
    vector<int> Inquiry(m);
    for(int i=0; i<m; i++)
        cin >> Inquiry[i];
    for(int j=0; j<m; j++)
    {
        for( int i=0; i<n; i++)
        {
            if(a[i].Text == Inquiry[j])
            {
                cout << a[i].Num << " " << a[i].Exam << endl;
                break;
            }
        }
    }

    return 0;
}