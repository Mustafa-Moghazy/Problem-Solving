/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){
    for(int i=2; i <= sqrt(n); ++i)
        if( n%i == 0 )
            return false;
    return true;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if( Prime(n) && n > 1 )
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return (0);
}
