/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a, b, c ;
    cin>>a>>b>>c;
    if( a > b && a > c ){
        if( b > c)
            cout<<c<<" "<<a;
        else
            cout<<b<<" "<<a;
    }
    else if( b > c ){
        if( a > c )
            cout<<c<<" "<<b;
        else
            cout<<a<<" "<<b;
    }
    else{
        if( a>b )
            cout<<b<<" "<<c;
        else
            cout<<a<<" "<<c;
    }

    /***************
    * Method 2
    *
    * cout<< min(a, min(b, c)) << " " << max(a, max(b, c));
    *
    ****************/

    return (0);
}


