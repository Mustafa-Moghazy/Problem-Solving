/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1; i<=n; i++){
        for(int j= i; j<=n-1; j++){
            cout<<" ";
        }
        for(int k=1; k<i*2; k++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=n; i>0; i--){

        for(int j= n-1; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<i*2; k++){
            cout<<"*";
        }

        cout<<"\n";
    }

    return (0);
}
