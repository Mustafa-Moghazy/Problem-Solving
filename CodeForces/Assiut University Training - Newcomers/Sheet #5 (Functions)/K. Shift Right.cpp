/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a [10000+4];
void Shift(int n, int a[]){
    int temp = a[n-1];
    for(int i=n-1; i>=0; i--)
        a[i+1] = a[i];
    a[0] = temp;
}
int main(){
    int n, x;
    cin >> n >> x;
    for(int  i=0; i<n; i++)
        cin >> a[i];
    while(x--){
        Shift(n, a);
    }
    for(int i=0; i<n; i++)
        cout << a[i] << " ";

    return (0);
}
