/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    int n; cin >> n;
    set<string> S;
    while(n--){
        string s; cin >> s;
        S.insert(s);
    }
    cout << S.size();

    return (0);
}

