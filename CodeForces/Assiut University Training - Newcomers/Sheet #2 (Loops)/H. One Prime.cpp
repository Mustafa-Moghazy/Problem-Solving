/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool prime = true;
    for(int i=2 ; i<=n/2; i++)
        if( n%i == 0){
            prime = false;
            break;
        }
    if( prime )
        cout<<"YES";
    else
        cout<<"NO";

    return (0);
}
