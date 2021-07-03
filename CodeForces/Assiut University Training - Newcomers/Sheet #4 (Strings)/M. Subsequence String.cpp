/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string h = "hello";
    int c = 0;
    for( int i = 0; i<s.size(); i++ ){
        if( s[i] == h[c] )
            c++;
    }

    if( c == h.size() )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
