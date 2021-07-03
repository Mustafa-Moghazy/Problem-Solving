/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    string s, t;
    cin >> s >> t;
    int c = 0;
    for(int i=0; i<t.size(); i++){
        if( t[i] == s[c] )
            c++;
    }

    cout<< c+1 << endl;


    return (0);
}
