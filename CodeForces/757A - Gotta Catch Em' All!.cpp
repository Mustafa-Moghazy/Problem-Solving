/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OO INT_MAX
#define endl '\n'
void Fast_Code(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
}
int a[150];
int main() { Fast_Code();
    string s; cin >> s;
    for(int i=0; i<s.size(); ++i) ++a[s[i]];
    string t = "Bulbasaur";
    int ans = OO;
    for(int i=0; i<t.size(); i++){
        if(t[i] == 'u' || t[i] == 'a' )
            ans = min(ans, a[t[i]]/2);
        else
            ans = min(ans, a[t[i]]);
    }
    cout << ans << endl;

    return (0);
}
