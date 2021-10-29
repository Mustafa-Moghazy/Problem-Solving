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
    int n; cin >> n;
    bool f = true;
    for(int i=0; i+2<=n; i+=2){
        if(f) cout << "aa";
        else cout << "bb";
        f = !f;
    }
    if(f && n%2)
        cout << 'a';
    else if( !f && n%2)
        cout << 'b';

    return (0);
}
