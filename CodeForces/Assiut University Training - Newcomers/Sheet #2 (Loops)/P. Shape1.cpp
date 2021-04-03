/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=row; i>=1; i--){
        for( int n=i; n>=1; n--)
            cout<<"*";

        cout<<"\n";
    }

    return (0);
}
