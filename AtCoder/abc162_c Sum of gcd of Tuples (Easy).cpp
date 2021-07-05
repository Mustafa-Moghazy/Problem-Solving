/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int gcd(int a, int b){
    if ( b == 0 )
        return a;
    return gcd( b, a % b );
}

int main(){ Fast_Code();
    int n; cin >> n;
    ll sum = 0;
    for(int i=1; i<=n; ++i){
        for(int ii=1; ii<=n; ++ii){
            for(int iii=1; iii<=n; ++iii){
                int t = gcd(i, ii);
                sum += gcd(t, iii);
            }
        }
    }
    cout << sum << endl;

    return (0);
}

