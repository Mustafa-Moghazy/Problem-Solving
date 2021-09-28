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
    int u = 0, d = 0, r = 0, l = 0, n;
    cin >> n;
    for(int i=0; i<n; i++){
        char a; cin >> a;
        if( a == 'U' ) u++;
        if( a == 'D' ) d++;
        if( a == 'L' ) l++;
        if( a == 'R' ) r++;
    }
    cout << (min(l, r) * 2) + (min(u, d) * 2) << endl;

    return (0);
}
