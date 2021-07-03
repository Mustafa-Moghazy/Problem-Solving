/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    string s1, s2;
    while(t--){
        cin>>s1>>s2;
        int mini = min(s1.size(), s2.size());
        int mx = max(s1.size(), s2.size());

        for( int i=0; i<mini; i++)
            cout<<s1[i]<<s2[i];

        if(s1.size() > s2.size()){
            for(int i=mini; i<mx; ++i)
                cout<<s1[i];
        }
        else if ( s2.size() > s1.size() ){
            for(int i=mini; i<mx; ++i)
                cout<<s2[i];
        }

        cout << '\n';
    }

    return (0);
}
