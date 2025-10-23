// https://cses.fi/problemset/task/1068

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    cout << t << " " ;
    while(t!=1){
        if(t%2==0){
            t = t/2;
            cout << t << " " ;
        }else{
            t = (t*3)+1;
            cout << t << " " ;
        }
    }
}