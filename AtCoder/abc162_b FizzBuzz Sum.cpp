/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    int n;; cin >> n;
    ll sum = 0;
    for(int i=1; i<=n; i++)
        if( !(i%3==0) && !(i%5==0) )
            sum += i;

    cout << sum << endl;

    return (0);
}

