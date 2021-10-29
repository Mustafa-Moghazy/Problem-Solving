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
    int n; cin >> n;
    for(int i=0; i<n; ++i) cin >> a[i];
    int in = 0, dec = n-1;
    for(int i=1; i<n; i++)
        if( a[i] > a[i-1] )
            in++;
        else
            break;
    for(int i=n-1; i>0; --i )
        if(a[i] < a[i-1] )
            dec--;
        else
            break;
    bool ans = true;
    for(int i=in+1; i<=dec; i++)
        if(a[i] != a[i-1])
            ans = false;
    if( ans )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return (0);
}
