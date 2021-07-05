/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int a [200000+5];
int main(){ Fast_Code();
    int k, n;
    cin >> k >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int maxDistance = k - a[n-1] + a[0];
    for(int i=1; i<n; ++i){
        if( a[i] - a[i-1] > maxDistance )
            maxDistance = a[i] - a[i-1];
    }

    cout << k - maxDistance << endl;

    return (0);
}
