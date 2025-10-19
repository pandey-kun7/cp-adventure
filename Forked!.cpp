// https://codeforces.com/problemset/problem/1904/A

// ========================== NOTE ============================
// I was using 1 set only but later on i realized if a=b then there comes self wasted values
// in the set and that beacme a problem

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,x1,x2,y1,y2;
        cin >> a >> b;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        set<array<int,2>> s1,s2;
        s1.insert({x1+b,y1+a});
        s1.insert({x1-b,y1+a});
        s1.insert({x1+b,y1-a});
        s1.insert({x1-b,y1-a});
        s1.insert({x1-a,y1+b});
        s1.insert({x1-a,y1-b});
        s1.insert({x1+a,y1+b});
        s1.insert({x1+a,y1-b});

        s2.insert({x2+b,y2+a});
        s2.insert({x2-b,y2+a});
        s2.insert({x2+b,y2-a});
        s2.insert({x2-b,y2-a});
        s2.insert({x2-a,y2+b});
        s2.insert({x2-a,y2-b});
        s2.insert({x2+a,y2+b});
        s2.insert({x2+a,y2-b});

        int count = 0;
        for(auto x: s1){
            if(s2.find(x)!=s2.end()){
                count++;
            } 
        }
        cout << count << endl;
    }
}