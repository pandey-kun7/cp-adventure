//https://codeforces.com/problemset/problem/1858/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int q,w,e;
        cin >> q >> w >> e;
        if(e%2!=0){
            if((e/2)+1+q > w+(e/2)){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }else{
            if(q>w){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }
    }
}