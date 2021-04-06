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
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++){
        int miniIndix = i;
        for(int j = i+1; j<n; j++){
            if( arr[j] <= arr[miniIndix])
                miniIndix = j;
        }
        swap(arr[i], arr[miniIndix]);
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    /***************************
     Note -> You can solve this problem
             using frequancy array
    ****************************/

    return (0);
}
