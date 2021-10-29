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
vector<int>v;
int main() { Fast_Code();
    int n; cin >> n;
    // corner test case
    if( n == 0 ){
        cout << 1 << endl;
        return (0);
    }
    if( n % 4 == 1 ) cout << 8 << endl;
    if( n % 4 == 2 ) cout << 4 << endl;
    if( n % 4 == 3 ) cout << 2 << endl;
    if( n % 4 == 0 ) cout << 6 << endl;

    return (0);
}
