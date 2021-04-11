/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
ll Pre_Sum [100000+5];
int main(){
    int n, q; cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        Pre_Sum[i] = (i==0)? arr[i] : Pre_Sum[i-1] + arr[i];
    }
    int l, r;
    while(q--){
        cin>>l>>r;
        if(l==1)
            cout<<Pre_Sum[r-1]<<endl;
        else
            cout<<Pre_Sum[r - 1]-Pre_Sum[l-2]<<endl;
    }

    return (0);
}
