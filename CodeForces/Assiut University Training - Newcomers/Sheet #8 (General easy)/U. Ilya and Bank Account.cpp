/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n; cin>>n;
    if( n > 0 )
        cout << n << endl;
    else{
        n *= -1;
        if( n%10 > (n/10)%10 )
            cout << (n/10) * -1 << endl;
        else{
            int t = n%10;
            n /= 100;
            cout << (n*10 + t) * -1 << endl;
        }

    }



    return (0);
}

