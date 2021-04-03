/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l1, l2, r1, r2;
    cin>> l1 >> r1 >> l2 >> r2;
    if( l2 > r1 || l1 > r2)
        cout<< -1 ;
    else
        cout<<max(l1, l2) << " " << min(r1, r2);

    return (0);
}


