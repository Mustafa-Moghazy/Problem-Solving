/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool f = false;
        for(int i=0; i<s.size()-1; ++i){
            if(s.substr(i,3) == "101" || s.substr(i,3) == "010" ){
                f = true;
                break;
            }
        }
        if(f)
            cout<<"Good\n";
        else
            cout<<"Bad\n";
    }

    return (0);
}
