/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if( n == 0)
            cout<< n;
        while( n != 0 ){
            cout<< n%10 <<" ";
            n /= 10;
        }
        cout<<"\n";
    }

    return (0);
}
