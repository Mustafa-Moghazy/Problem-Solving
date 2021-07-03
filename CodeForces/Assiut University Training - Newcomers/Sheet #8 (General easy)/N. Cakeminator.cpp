/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

bool a [15] [15];

int main(){ fast();
    int r, c;
    cin>> r >> c;
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            char t; cin>>t;
                if( t == 'S' )
                    a[i][j] = 1;
        }
    }
    int R = 0, C = 0;
    for(int i=0; i<r; i++){
        bool f = true;
        for(int j=0; j<c; j++){
            if( a[i][j] == 1 ){
                f = false;
                break;
            }
        }
        if(f) R++;
    }
    for(int i=0; i<c; i++){
        bool f = true;
        for(int j=0; j<r; j++){
            if( a[j][i] == 1 ){
                f = false;
                break;
            }
        }
        if(f) C++;
    }
    cout<< C * r + R * ( c - C );
    return (0);
}

