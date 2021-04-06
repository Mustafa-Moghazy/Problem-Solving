/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have   //
// initial Value Zero            //
int arr [100000+5];
int main(){
    int n, x; cin>>n;
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    cin>>x;
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            cout<< i;
            found = true;
            break;
        }
    }
    if(! found )
        cout<< -1;

    return (0);
}
