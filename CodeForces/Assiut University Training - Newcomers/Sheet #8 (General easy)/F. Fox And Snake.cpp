/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    int n, m;
    cin >> n >> m;
    bool f = true;
    for(int i=0; i<n; i++){
        if( i%2 == 0){
            for(int i=0; i<m; ++i)
                cout<<"#";
            cout<<'\n';
        }
        else{
            if ( f ){
                for(int i=0; i<m-1; ++i)
                    cout<<".";
                cout<<"#\n";
                f = !f;
            }
            else{
                cout<<"#";
                for(int i=0; i<m-1; ++i)
                    cout<<".";
                cout<<'\n';
                f = !f;
            }
        }
    }


    return (0);
}
