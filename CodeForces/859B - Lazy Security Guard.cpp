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
    double n; cin >> n;
    int t = sqrt(n);
    if( n == t*t )
        cout << t*4 << endl;
    else
        cout << t * 4 + ceil((n-(t*t))/t)*2  << endl;

    return (0);
}
