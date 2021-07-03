/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a[1003], b[1003];
void Solution(int n, int a[], int b[]){
    for(int i=0; i<n; i++)
        cout << b[i] << " ";
    for(int i=0; i<n; i++)
        (i != n-1)? cout << a[i] << " " : cout<<a[i];
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    Solution(n, a, b);

    return (0);
}
