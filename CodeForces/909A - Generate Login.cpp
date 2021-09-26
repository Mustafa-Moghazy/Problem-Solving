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
    string a, b, ans = "";
    cin >> a >> b;
    ans += a[0];
    for( int i = 1; i <a.size(); ++i)
        if( a[i] < b[0] )
            ans += a[i];
        else
            break;

   cout << ans + b[0] << endl;
    return (0);
}
