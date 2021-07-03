/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a [1003];
void Solution(int n, int c, int a[]){
    for(int i=0; i<n; i++)
        if( a[i] != 0 )
            cout << a[i] << " ";
    for(int i=0; i<c; i++)
        (i!=c-1)? cout << 0 << " " : cout << 0;
}
int main(){
    int n, c = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 0)
            c++;
    }
    Solution(n, c, a);
    return (0);
}
