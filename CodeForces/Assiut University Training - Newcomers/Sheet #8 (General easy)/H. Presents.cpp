/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [105];

int main(){ fast();
    int n; cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        a[x] = i+1;
    }
    for(int i=0; i<=100; i++)
        if( a[i] > 0)
            cout << a[i] << " ";



    return (0);
}
