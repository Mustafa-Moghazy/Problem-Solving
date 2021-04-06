/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have   //
// initial Value Zero            //
int arr [1000+5];
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++){
        if( arr[i] <= 10 )
            cout<< "A[" << i << "]" << " = " << arr[i] <<endl;
    }

    return (0);
}
