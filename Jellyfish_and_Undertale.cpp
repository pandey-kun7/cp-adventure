// https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long a ,b;
        int n;
        cin >> a >> b >> n;
        vector<long long> arr(n);
        long long s=b;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i]>=a){
                s+=a-1;
            }else{
                s+=arr[i];
            }
        }
        cout << s << endl;
    }
}