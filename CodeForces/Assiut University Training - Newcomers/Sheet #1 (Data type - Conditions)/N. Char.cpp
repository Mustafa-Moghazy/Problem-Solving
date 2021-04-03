/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a; cin>>a;
    if(a >= 'a' && a <='z')
        cout<< char(a-32);
    else
        cout<< char (a+32);

    return (0);
}


