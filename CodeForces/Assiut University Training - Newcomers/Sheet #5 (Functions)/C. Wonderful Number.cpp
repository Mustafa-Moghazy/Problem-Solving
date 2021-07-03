/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
bool Odd (int n){
    return (n&1);
}

bool palindrome (int n){
    int rev = 0, temp = n;
    while( temp ){
        // add right bit to rev
        rev = ( rev << 1 ) | ( temp & 1 );
        // remove last bit;
        temp = temp >> 1;
    }

    return rev == n;
}
int main(){
    int n; cin >> n;
    if( Odd(n) && palindrome(n) )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
