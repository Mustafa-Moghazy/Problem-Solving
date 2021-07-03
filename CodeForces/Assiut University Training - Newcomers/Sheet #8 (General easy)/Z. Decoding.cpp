/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n; cin>>n;
    string s; cin>>s;
    string ans = "" ;
    for(int i=0; i<n; i++){
        if( i%2 == 0 )
            ans += s[i];
        else
            ans = s[i] + ans;
    }

    if( n%2 == 0 )
        reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return (0);
}

