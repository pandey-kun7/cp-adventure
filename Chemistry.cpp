// https://codeforces.com/problemset/problem/1883/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> char_counts;
        for(char c : s){
            char_counts[c]++;
        }
        int count_odd_occurrences = 0;
        for(auto const &x : char_counts){
            if(x.second%2!=0){
                count_odd_occurrences+=1;
            }
        }
        if(count_odd_occurrences<=k+1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}