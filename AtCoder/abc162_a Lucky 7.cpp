/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    string s; cin >> s;
    if(s[0] == '7' || s[1] == '7' || s[2] == '7' )
        cout <<"Yes\n";
    else
        cout << "No\n";

    return (0);
}

