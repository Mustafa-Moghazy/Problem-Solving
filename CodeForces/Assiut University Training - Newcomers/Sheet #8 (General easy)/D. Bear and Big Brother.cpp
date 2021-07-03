/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int a, b;
    cin >> a >> b;
    int c = 0;
    while( a <= b ){
        c++;
        a *= 3;
        b *= 2;
    }
    cout << c << endl;

    return (0);
}

