/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OO INT_MAX
#define endl '\n'
void Fast_Code(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
}
int a[105];
int main() { Fast_Code();
    string s; cin >> s;
    string t = s.substr(0,2);
    string t1 = s.substr(3,2);
    int h = stoi(t), m = stoi(t1);
    int ans = 0;
    while(true){
        if( (h/10) % 10 == m%10 && (m/10)%10 == h%10){
            cout << ans ;
            return (0);
        }
        m++; ans++;
        if( m == 60 ){
            h++; m = 0;
            if( h == 24 )
                h = 0;
        }
    }
}
