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
int a [205];
int main() { Fast_Code();
    int t, n, k, c ;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=0; i<k; ++i)
            cin >> a[i];
        /// the number of unWatered before the first tap ///
        int ans = a[0], c = 0;
        for(int i=1; i<k; ++i ) {
            /// number of unWatered from i-1 to i tap ///
            c = max(c, ((a[i] - a[i - 1]) + 2) / 2);
        }
        ans = max({ans, c, (n-a[k-1])+1});
        cout << ans << endl;
    }
    return (0);
}
