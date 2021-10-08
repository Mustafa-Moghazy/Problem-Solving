/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OO INT_MAX
#define endl '\n'
void Fast_Code(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
}
bool check[150];
int arr[150];
int main() { Fast_Code();
   int n, x;
   cin >> n >> x;
   for(int i=0; i<n; ++i){
       cin >> arr[i];
       check[arr[i]] = true;
   }
   int ans = 0;
   for(int i=0; i<x; ++i){
       if(!check[i]) ans++;
   }
   if(check[x]) ans++;
   cout << ans << endl;

    return (0);
}
