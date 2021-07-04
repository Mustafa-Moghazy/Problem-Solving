/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    string s; cin>>s;
    if( s[2] == s[3] && s[4] == s[5])
        cout << "Yes";
    else
        cout<< "No";

    return (0);
}
