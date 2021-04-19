/*
 * 团体程序设计天梯赛
 * 2021.4.19
 * github @Lickton
 * */

#include <bits/stdc++.h>
using namespace std;
bool check(string a);

int main(){

    string a, b, t;
    int sum = 0;
    getline(cin, t);
    for(int i; i < t.length(); i++){
        if(t[i] == ' '){
            a = t.substr(0, i);
            b = t.substr(i+1, t.length() - i - 1);
            break;
        }
    }
    if(!check(a))
        a = "?";
    if(!check(b))
        b = "?";
    
    cout << a << " + " << b << " = ";
    if(a != "?" && b != "?"){
        int A = stoi(a);
        int B = stoi(b);
        sum = A + B;
        cout << sum << endl;
    }else{
        cout << "?" << endl;
    }

    return 0;
}

bool check(string a){    
    if(a.length() == 0)
        return false;
    for(int i = 0; i < a.length(); i++)
        if(!isdigit(a[i]))
            return false;
    int num = stoi(a);
    if(num < 1 || num > 1000)
        return false;
    
    return true;
}