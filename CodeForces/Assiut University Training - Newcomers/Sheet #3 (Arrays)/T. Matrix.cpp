/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int a [100+5][100+5];
int main(){
    int n; cin>>n;
    int m=0,s=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(i==j) m+=a[i][j];
        }
    }
    int i = n-1, j=0;
    for(int c=0; c<n; c++){
        s += a[i][j];
        i--; j++;
    }
    cout<<abs((m-s));

    return (0);
}
