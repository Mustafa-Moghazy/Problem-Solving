/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    string s, t; cin>>s;
    while(q--){
        cin>>t;
        if( t == "pop_back" ){
            s.pop_back();
        }
        if( t == "front" ){
            cout<< s.front() << '\n';
        }
        if( t == "back" ){
            cout<< s.back() << '\n';
        }
        if( t == "sort" ){
            int l, r;
            cin>>l>>r;
            int left = min(l, r);
            int right = max(l, r);
            sort(s.begin()+left-1, s.begin()+right);
        }
        if( t == "reverse"){
            int l, r;
            cin>>l>>r;
            int left = min(l, r);
            int right = max(l, r);
            reverse(s.begin()+left-1, s.begin()+right);
        }
        if( t == "print"){
            int p; cin>>p;
            cout<< s[p-1]<<'\n';
        }
        if( t == "substr"){
            int l, r;
            cin>>l>>r;
            cout<< s.substr(l-1, r) << '\n';
        }
        if( t == "push_back" ){
            char a; cin>>a;
            s.push_back(a);
        }

    }

    return (0);
}
