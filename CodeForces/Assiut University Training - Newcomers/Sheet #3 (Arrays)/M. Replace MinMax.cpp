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

    int min = 0, max = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[max])
            max = i;
        if(arr[i] < arr[min])
            min = i;
    }

    swap(arr[min], arr[max]);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return (0);
}
