//https://codeforces.com/problemset/problem/1791/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int  n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        int low,high;
        low=0;high=n-1;
        int start = 0;
        int end = 0;
        if(n==1){
            cout << 1 <<endl;
        }else{
            while(low<high){
                if((s[low]=='0' && s[high]=='1') || (s[low]=='1' && s[high]=='0')){
                    start = low;end = high;
                    low++;
                    high--;
                }else{
                    start = low-1;end = high+1;
                    break;
                }
            }
            cout << end - start -1 << endl;

        }
    }
}