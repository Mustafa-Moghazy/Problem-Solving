/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int a [100000+5];
int b [100000+5];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    int c = 0;
    for(int i=0; i<n; i++){
        if(b[c] == a[i])
            c++;
    }
    if(c==m)
        cout<<"YES";
    else
        cout<<"NO";


    return (0);
}
