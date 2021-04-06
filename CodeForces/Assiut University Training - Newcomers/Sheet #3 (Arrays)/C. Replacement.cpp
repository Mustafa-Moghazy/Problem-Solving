/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [1000+5];
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int in; cin>>in;
        if( in > 0 )
            arr[i] = 1;
        else if( in == 0)
            arr[i] = 0;
        else
            arr[i] = 2;
    }
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";

    return (0);
}
