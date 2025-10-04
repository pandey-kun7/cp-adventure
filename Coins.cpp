//https://codeforces.com/problemset/problem/1814/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t){
        long long n,k;
        cin >> n >> k;
        if(k==1){
            cout << "YES" << endl;
        }else if(n<k){
            cout << "NO" <<endl;
        }else if(n%2!=0 && k%2==0){
            cout << "NO" <<endl;
        }else{
            cout << "YES" << endl;
        }
        t--;
    }
}