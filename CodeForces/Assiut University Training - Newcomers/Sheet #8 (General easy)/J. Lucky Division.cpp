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
    if( n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%477 == 0 ||
        n%447 == 0 || n%744 == 0 || n%774 == 0 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return (0);
}
