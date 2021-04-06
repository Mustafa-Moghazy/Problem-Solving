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
    sort( arr, arr+n);
    int mini = arr[0];
    int freq = 0;
    for(int i=0; i<n; i++)
        if(arr[i] == mini)
            freq++;
    if(freq % 2 == 1)
        cout<<"Lucky\n";
    else
        cout<<"Unlucky\n";

    return (0);
}
