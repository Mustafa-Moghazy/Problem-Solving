/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int a [10000000+5];
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int in; cin>>in;
        a[in]++;
    }
    bool f = true;
    for(int i=0; i<n; i++){
        int in; cin>>in;
        if( a[in] > 0)
            a[in]--;
        else{
            cout<<"no";
            f = false;
            break;
        }
    }
    if(f)
        cout<<"yes";

    return (0);
}
