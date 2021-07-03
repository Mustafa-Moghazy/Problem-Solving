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
    vector <int> v1, v2, v3;
    for(int i=0; i<n; i++){
        int in; cin>>in;
        if( in == 1 )
            v1.push_back(i+1);
        if( in == 2 )
            v2.push_back(i+1);
        if( in == 3 )
            v3.push_back(i+1);
    }

    int Max = min({v1.size(), v2.size(), v3.size()});
    cout << Max << endl;
    for(int i=0; i<Max; ++i)
        cout << v1[i] << " " << v2[i] << " " << v3[i] <<endl;


    return (0);
}

