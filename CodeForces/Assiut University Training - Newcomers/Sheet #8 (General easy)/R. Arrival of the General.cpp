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
    for( int i=0; i<n; i++)
        cin >> a[i];
    int Max = 0, Min = n-1;
    for(int i=0; i<n; i++){
        if( a[i] > a[Max] )
            Max = i;
        if ( a[i] <= a[Min] )
            Min = i;
    }
    int ans = Max - 1 + n - Min;
    if ( Max > Min ) ans--;
    cout << ans <<endl;

    return (0);

}

