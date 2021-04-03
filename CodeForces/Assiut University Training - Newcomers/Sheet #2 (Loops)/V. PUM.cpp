/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int i = 1;
    while( n > 0 ){
        if( i % 4 == 0){
            cout << "PUM\n";
            n--;
        }
        else
            cout << i << " ";
        i++;
    }

    return (0);
}
