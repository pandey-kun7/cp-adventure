//https://codeforces.com/problemset/problem/1900/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t){
        int n;
        cin >> n; 
        string arr;
        cin >> arr;
        int count=0;
        int t_dots=0;
        int m=0;
        for (int i = 0 ; i<n ; i++ ){
            if(arr[i]=='.'){
                t_dots++;
                ++m;
            }else if(arr[i]=='#'){
                if(m>count){
                    count = m;
                    m = 0;
                }else{
                    m=0;
                }
            }
        }
        count=max(m,count);
        if(count==0){
            cout << 0 << endl;
        }else if(count <3){
            cout << t_dots << endl;
        }else{
            cout << 2 << endl;
        }
        t--;
    }
}