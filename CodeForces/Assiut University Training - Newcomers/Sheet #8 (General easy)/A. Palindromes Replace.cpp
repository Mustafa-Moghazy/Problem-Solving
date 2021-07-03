/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    string s; cin>>s;
    int n = s.size();
    for(int i=0; i<n/2; ++i){
        if(s[i] == '?' && s[n-i-1] != '?'){
            s[i] = s[n-i-1];
        }
        else if( s[n-i-1] == '?' && s[i] != '?'){
            s[n-i-1] = s[i];
        }
    }
    bool f = true;
    for(int i=0; i<n/2; i++){
        if( s[i] != s[n-i-1] ){
            f = false;
            break;
        }
        else if(s[i] == '?'){
            f = false;
        }
    }
    if( f )
        cout<< s << endl;
    else
        cout<< -1 << endl;



}

