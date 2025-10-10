// https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin >> n >> k ;
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(),b.end());
        if(k==1){
            if(a == b){
                cout << "YES" <<endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "YES" << endl;
        }
    }
}

