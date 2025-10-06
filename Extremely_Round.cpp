//https://codeforces.com/problemset/problem/1766/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t){
        string s;
        cin >> s;
        int len = s.size();
        string temp_s(1,s[0]);
        int num = stoi(temp_s);
        int result = 0;
        if(len<=1){
            result = num;
        }else{
            result = (len-1)*9 + num;
        }
        cout << result << endl;
        t--;
    }
}