// https://codeforces.com/problemset/problem/1806/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t){
        int x1,y1,x2,y2;
        int moves=0;
        cin >> x1 >> y1 >> x2 >> y2;
        if(y1>y2){
            cout << -1 << endl;
        }else{
            while(y1<y2){
                x1++;y1++;moves++;
                }
            if (x1>=x2){
                moves +=x1-x2;
                cout << moves << endl;
            }else{
                cout << -1 << endl;
            }
        }
        t--;
    }
}