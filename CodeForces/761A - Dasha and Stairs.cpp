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
int main() { Fast_Code();
    int a, b;
    cin >> a >> b;
    if( (a == b && a!=0 && b !=0) || abs(a-b) == 1 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
