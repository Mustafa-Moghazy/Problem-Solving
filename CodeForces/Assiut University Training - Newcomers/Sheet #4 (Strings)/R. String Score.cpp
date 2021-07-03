/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    long long score = 0;
    for(int i=0; i<s.size(); i++){
        if( s[i] == 'V' )
            score += 5;
        if( s[i] == 'W' )
            score += 2;
        if( s[i] == 'X' && i+1 < s.size() )
            i++;
        if( s[i] == 'Y' && i+1 < s.size() ){
            char a = s[i+1];
            s += a;
            i++;
        }
        if( s[i] == 'Z' && i+1 < s.size() ){
            if ( s[i+1] == 'V' ){
                score /= 5;
                i++;
            }
            else if( s[i+1] == 'W' ){
                score /= 2;
                i++;
            }
        }
    }

    cout<<score;

    return (0);
}
