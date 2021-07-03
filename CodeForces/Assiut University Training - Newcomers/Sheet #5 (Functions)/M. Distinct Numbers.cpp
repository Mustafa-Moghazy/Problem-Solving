/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a[1003];
int Solution(int n, int a[]){
    int c = 0;
    for(int i=0; i<n; i++){
        bool f = true;
        for(int j=0; j<i; j++){
            if(a[i] == a[j]){
                f = false;
                break;
            }
        }
        if(f)
            c++;
    }
    return c;
}
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int ans = Solution(n, a);
    cout << ans << endl;
    return (0);
}
