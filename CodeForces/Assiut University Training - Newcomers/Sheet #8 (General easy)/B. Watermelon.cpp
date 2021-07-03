/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n; cin >> n;
    if( n%2 == 0 && n != 2)
        cout<<"YES";
    else
        cout<<"NO";


    return (0);
}

