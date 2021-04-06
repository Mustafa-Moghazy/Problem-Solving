/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Declare an array outside main, //
// Make All array elements Have   //
// initial Value Zero            //
int arr [100000+5];
int main(){
    int n; cin>>n;
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        sum += arr[i];
    }
    cout<< abs(sum) <<endl;

    return (0);
}
