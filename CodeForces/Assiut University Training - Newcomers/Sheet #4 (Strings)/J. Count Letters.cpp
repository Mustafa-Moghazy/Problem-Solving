/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int freq [ 50 ];
int main(){
    string s; cin>>s;
    for(int i=0; i<s.size(); ++i)
        ++freq[ s[i] - 'a' ];

    for(int i=0; i<50; i++){
        if( freq[i] > 0 )
            cout<< char(i+'a') << " : " << freq[i] << '\n';
    }

    return (0);
}
