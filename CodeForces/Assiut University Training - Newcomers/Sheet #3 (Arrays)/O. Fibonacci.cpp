/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
ll fibArray [55];
int main(){
    fibArray[1] = 0, fibArray[2] = 1;
    for(int i=3; i<=50; i++)
        fibArray[i] = fibArray[i-1] + fibArray[i-2];

    int n; cin>>n;
    cout<<fibArray[n];

    return (0);
}
