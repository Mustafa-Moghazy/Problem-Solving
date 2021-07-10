/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    ll n = 100, c = 0, x;
    cin >> x;
    while( n < x ){
        n = n + (n/100);
        c++;
    }
    cout  << c << endl;

    return(0);
}

