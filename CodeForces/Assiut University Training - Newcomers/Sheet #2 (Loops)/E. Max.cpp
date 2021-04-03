/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, in, ans = 0;
    cin>>n;
    while(n--){
        cin>>in;
        if( in > ans )
            ans = in;
    }
    cout << ans ;
    return (0);
}
