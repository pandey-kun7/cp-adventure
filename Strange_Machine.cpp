// https://codeforces.com/contest/2156/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n,q;
        cin >> n >> q;
        string s;
        map<char,int> freq;
        cin >> s;
        for(char c:s){
            freq[c]++;
        }
        vector<long long> arr(q);
        for(int i = 0 ; i < q ; i++){
            cin >> arr[i];
        }
        for(int i = 0 ; i < q ; i ++){
            if(freq['B']==0){
                cout << arr[i] << endl;
            }else{
                long long ans=0;
                while(arr[i]){
                    for(char c:s){
                        if(arr[i]==0){
                            break;
                        }
                        if(c=='A'){
                            arr[i]-=1;
                            ans++;
                        }else{
                            arr[i]/=2;
                            ans++;
                        }
                    }
                }
                cout << ans << endl;
            }
        }
    }
}