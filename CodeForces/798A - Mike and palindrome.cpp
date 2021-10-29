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
int main() { Fast_Code();
    string s; cin >> s;
    int n = s.size(), c = 0;
    for(int i=0; i<n/2; ++i){
        if(s[i] != s[n-1-i])
            c++;
    }
    if( c == 1 || (c == 0 && n%2 ) )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
