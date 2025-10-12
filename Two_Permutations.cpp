// https://codeforces.com/problemset/problem/1761/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if(n!=1){
            if(a!=n || b!=n){
                if(n-a-b>1){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }else if(a==n && b==n){
                cout << "YES" <<endl;
            }
        }else{
           cout << "YES" << endl;
        }
    }
}