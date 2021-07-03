/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n; cin>>n;
    int p, q, c = 0;
    while( n-- ){
        cin >> p >> q;
        if( q - p >= 2)
            c++;
    }

    cout << c << endl;


    return (0);
}
