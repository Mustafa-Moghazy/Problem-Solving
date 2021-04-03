/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    long long sum = a + b + c;
    cout<< min(a, min(b,c)) << endl
        << sum - ( min(a, min(b, c)) + max(a, max(b,c)) ) << endl
        << max(a, max(b, c))<<endl
        << endl << a << endl << b << endl << c ;

    return (0);
}


