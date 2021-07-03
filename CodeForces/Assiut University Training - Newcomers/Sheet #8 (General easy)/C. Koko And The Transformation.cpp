/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [100000+5];
int b [100000+5];

int main(){ fast();
    int n, m;
    cin>> n >> m;
    ll sum_a = 0, sum_b = 0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum_a += a[i];
    }
    for(int i=0; i<m; ++i){
        cin>>b[i];
        sum_b += b[i];
    }

    if( sum_a == sum_b )
        cout<<"Yes\n";
    else
        cout<<"No\n";


    return (0);
}

