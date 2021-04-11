/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int n, q; cin>>n>>q;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    while(q--){
        int k; cin>>k;
        int l = 0, r = n-1, mid;
        bool f = false;
        while(l<=r){
            mid = (l+r) / 2;
            if(arr[mid] == k){
                cout<<"found\n";
                f = true;
                break;
            }
            else if(arr[mid] > k){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        if(! f)
            cout<<"not found\n";
    }

    return (0);
}
