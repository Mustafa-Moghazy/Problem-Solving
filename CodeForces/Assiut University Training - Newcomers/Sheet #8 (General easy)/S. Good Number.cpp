/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n, k, t, c = 0;
    cin >> n >> k;
    while(n--){
        cin>>t;
        bool a [10] = {0};
        while( t > 0 ){
            a[ t%10 ] = 1;
            t/=10;
        }
        bool f = true;
        for(int i=0; i<=k; i++)
            if(a[i] != 1 ){
                f = false;
                break;
            }
        if( f )
            c++;
    }

    cout << c << endl;


    return (0);
}

