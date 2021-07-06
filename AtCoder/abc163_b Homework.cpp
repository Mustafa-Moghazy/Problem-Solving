/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int a[10000+5];
int main(){ Fast_Code();
    int n, m;
    cin >> n >> m;
    ll sum = 0;
    for(int i=0; i<m; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if( sum > n )
        cout << -1 << endl;
    else
        cout << n - sum << endl;

    return (0);
}

