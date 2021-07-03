/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n, x, d, c = 0;
    cin >> n >> x;
    ll sum = x;
    char in;
    while(n--){
        cin >> in >> d;
        if( in == '+' )
            sum += d;
        else{
            if( sum >= d )
                sum -= d;
            else
                c++;
        }
    }

    cout << sum << " " << c << endl;


    return (0);
}
