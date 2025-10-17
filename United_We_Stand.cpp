// https://codeforces.com/problemset/problem/1859/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        int maxNum = 0;
        int maxNumCount = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(maxNum<a[i]){
                maxNum=a[i];
                maxNumCount=1;
            }else if(maxNum == a[i]){
                maxNumCount++;
            }
        }
        bool hasDistinct = false;
        for(int i = 0 ; i < n-1 ; i++){
            if(a[i]!=a[i+1]){
                hasDistinct = true;
                break;
            }
        }
        if(!hasDistinct){
            cout << -1 << endl;
        }else{
            vector<long long> c(maxNumCount);
            vector<long long> b(n-maxNumCount);
            int j=0;
            cout << b.size() << " " << c.size() << endl;
            for(int i = 0 ; i < n ; i++){
                if(a[i]!=maxNum){
                    b[j]=a[i];
                    cout << b[j] << " ";
                    j++;
                }
            }
            cout << "\n";
            for(int i =0 ; i<maxNumCount ; i++){
                c[i]=maxNum;
                cout << c[i] << " ";
            }
            cout << "\n";
        }
    }
}