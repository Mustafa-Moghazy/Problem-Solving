/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int n; cin>>n;
    int ans = INT_MAX;
    int pos = 0;
    for( int i = 0; i<n; i++ ){
        cin>>arr[i];
        if( arr[i] < ans ){
            ans = arr[i];
            pos = i+1;
        }
    }
    cout<< ans << " " << pos << endl;

    return (0);
}
