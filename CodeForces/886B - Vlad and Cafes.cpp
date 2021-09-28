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
int a[200000+5];
bool vis[200000+5];
int main() { Fast_Code();
    int n; cin >> n;
    for(int i=0; i<n; ++i) cin >> a[i];
    int ans = 0;
    for(int i=n-1; i>=0; --i){
        if(!vis[a[i]]){
            ans = a[i];
            vis[a[i]] = true;
        }
    }
    cout << ans << endl;
    return (0);
}
