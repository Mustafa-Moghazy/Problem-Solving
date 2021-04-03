/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=1; i <= row; i++){
        for( int n=1; n<=i; n++)
            cout<<"*";

        cout<<"\n";
    }

    return (0);
}
