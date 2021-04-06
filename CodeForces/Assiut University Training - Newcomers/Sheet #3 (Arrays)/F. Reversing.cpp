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
    for(int i=n-1; i>=0; i--)
        cout<<arr[i]<< " ";

    return (0);
}
