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
    int n; cin >> n;
    for(int i=1; i<n; ++i){
        int in; cin>>in;
        ++a[in];
    }
    for(int i=1; i<=n; i++)
        cout << a[i] << endl;
    return (0);
}

