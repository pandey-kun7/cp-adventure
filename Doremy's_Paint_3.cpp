// https://codeforces.com/problemset/problem/1890/A 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()==2){
            int val1 = a[0];
            int val2 = -1;
            int count1=0,count2=0;
            for(int i = 0 ; i< n ; i++){
                if(a[i]!=val1){
                    val2 = a[i];
                }else{
                    count1++;
                }
            }
            count2 = n-count1;
            if(n%2==0 && count1==count2){
                cout << "Yes" << endl;
            }else if(n%2!=0){
                if(count1+1==count2 || count2+1==count1){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
            }else{
                cout << "No" << endl;
            }
        }else if(s.size()==1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}