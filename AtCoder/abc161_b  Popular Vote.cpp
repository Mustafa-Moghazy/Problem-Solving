/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int a [105];
int main(){ Fast_Code();
    int n, m; cin >> n >> m;
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> a [i];
        sum += a[i];
    }
    int c = 0;
    for(int i=0; i<n; i++){
        if( a[i] >= (sum / (4*m)) )
            c++;
    }
    if( c >= m )
        cout << "Yes\n";
    else
        cout << "No\n";

    return (0);
}

