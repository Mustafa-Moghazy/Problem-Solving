/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a [1003];
void Solution( int n, int a[] ){
    int Min = a[0], Max = a[0];
    for(int i=1; i<n; i++){
        if( a[i] < Min )
            Min = a[i];
        else if( a[i] > Max )
            Max = a[i];
    }
    cout << Min << " " << Max << endl;
}
int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    Solution(n, a);

    return (0);
}
