/*
 * 洛谷
 * 2021.4.29
 * github @Lickton
 * source AHOI2017 P3717
 * */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r;
    int count = 0;
    bool flag = false;
    cin >> n >> m >> r;
    int x[n], y[n];
    
    for(int i = 0; i < n; i++){
        x[i] = i + 1;
        y[i] = i + 1;
    }
    int sniff[m][2] = {0};
    
    for(int i = 0; i < m; i++){
        cin >> sniff[i][0];
        cin >> sniff[i][1];
    }
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            flag = false;
            for(int a = 0; a < m; a++){
                int dx = (x[i] - sniff[a][0]) * (x[i] - sniff[a][0]);
                int dy = (y[k] - sniff[a][1]) * (y[k] - sniff[a][1]);
                if( dx + dy <= r * r)
                    flag = true;
            }
            if(flag){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}