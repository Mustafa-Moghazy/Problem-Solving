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
int a[104];
int main() { Fast_Code();
    int n, dif = 0;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    dif = a[1] - a[0];
    for(int i=2; i<n; ++i)
        if(a[i] - a[i-1] != dif) {
            cout << a[n - 1] << endl;
            return 0;
        }

    cout << a[n-1] + dif << endl;

    return (0);
}
