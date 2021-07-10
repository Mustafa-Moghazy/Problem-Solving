/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    int n, a, b;
    cin >> n >> a >> b;
    for(int i=a; i<=b; ++i)
        if( i%n == 0 ){
            cout << "OK";
            return 0;
        }
    cout << "NG";

    return(0);
}

