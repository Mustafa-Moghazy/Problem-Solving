/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fast_Code(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ Fast_Code();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while(true){
        c -= b;
        if( c <= 0 ){
            cout << "Yes";
            break;
        }
        a -= d;
        if( a <= 0 ){
            cout << "No";
            break;
        }
    }

    /// anther Solution ///
    /*
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if( ceil(a/d) >= ceil(c/b) )
        cout << "Yes";
    else
        cout << "No";
    */

    return (0);
}

