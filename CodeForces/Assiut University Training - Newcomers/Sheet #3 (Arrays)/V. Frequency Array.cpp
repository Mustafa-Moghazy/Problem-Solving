/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int freq [100000+5];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int in; cin>>in;
        ++freq[in];
    }
    for(int i=1; i<=m; i++)
        cout<<freq[i]<<endl;

    return (0);
}
