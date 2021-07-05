/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    ll n; cin >> n;
    cout << ( 1000 * (n/500) ) + ( ((n%500)/5) * 5  );

    return (0);
}
