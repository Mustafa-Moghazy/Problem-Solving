/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    for(int i=0; i<s.size(); ++i){
        if( isupper(s[i]) ){
            cout << (char)tolower(s[i]);
        }
        else if( islower(s[i]) ){
            cout << (char)toupper(s[i]);
        }
        else
            cout << " ";
    }

    return (0);
}
