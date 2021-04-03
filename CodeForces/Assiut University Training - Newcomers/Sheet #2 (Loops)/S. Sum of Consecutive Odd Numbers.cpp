/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        long long sum = 0;
        for(int i = min(x, y) + 1; i <= max(x, y) - 1; i++ ){
            sum += (i%2 != 0)? i : 0;
        }
        cout<<sum<<endl;
    }

    return (0);
}
