/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    bool f = true;
    for(int i=0; i < n/2; ++i){
        if(s[i] != s[n-i-1] ){
            f = false;
            break;
        }
    }
    if ( f )
        cout<<"YES";
    else
        cout<<"NO";

    return (0);
}
