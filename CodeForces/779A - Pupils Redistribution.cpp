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
map <int, int> mp;
int main() { Fast_Code();
    int n, in;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> in;
        mp[in]++;
    }
    for(int i = 0; i<n; ++i){
        cin >> in;
        mp[in]--;
    }
    int ans = 0;
    for(int i=1; i<=5; ++i){
        if(mp[i]%2){
            cout << -1 << endl;
            return 0;
        } else {
            ans += abs(mp[i]) / 2 ;
        }
    }

    cout << ans / 2 << endl;

    return (0);
}
