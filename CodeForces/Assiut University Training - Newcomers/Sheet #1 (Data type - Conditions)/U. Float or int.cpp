/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    double n; cin>>n;
    if( n - int(n) == 0 )
        cout<< "int " << int (n);
    else
        cout<< "float " << int(n) << " " << n - int(n);

    return (0);
}


