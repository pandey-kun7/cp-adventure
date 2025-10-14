// https://codeforces.com/contest/1789/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tEvens = 0;
        vector<long long> a(n);
        for(int i = 0 ;i<n ; i++){
            cin >> a[i];
        }
        bool isGood = false;
        for(int i = 0 ; i < n ; i++){
            for( int j = 0 ; j<n;j++ ){
                if(i!=j && gcd(a[i],a[j])<=2){
                    isGood = true;
                    break;
                }
            }
        }
        if(isGood){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}