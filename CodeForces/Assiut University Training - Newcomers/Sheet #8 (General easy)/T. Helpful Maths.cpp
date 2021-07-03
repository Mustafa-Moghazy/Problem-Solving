/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [100+5];

int main(){ fast();
    string s; cin>>s;
    int c = 0;
    for(int i=0; i<s.size(); i+=2){
        a[c] = s[i] - '0';
        c++;
    }
    sort(a, a+c);
    for(int i=0; i<c; ++i){
        cout << a[i];
        if( i < c - 1 )
            cout << "+";
    }

    return (0);
}

