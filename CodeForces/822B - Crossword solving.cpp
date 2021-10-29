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
int a[105];
int main() { Fast_Code();
    int n, m, ans = OO;
    cin >> n >> m;
    string a, b, t = "";
    cin >> a >> b;
    for(int i=0; i<=m-n; ++i){
        int c = 0;
        for(int j=i, ii = 0; ii<n; ++j, ++ii){
            if(a[ii] != b[j]) c++;
        }
        if( c < ans ){
            ans = c;
            t = b.substr(i, n);
        }
    }
    cout << ans << endl;
    for(int i = 0; i<n; ++i)
        if(a[i] != t[i])
            cout << i+1 << " ";

    return (0);
}
