/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
/////////////////////////////////////
// 5 5
/// 6 4 9 11 15 // 3 + 2 + 3 + 3 = 11
// 10 9 11 15 // 2+2+3+3 = 10
// 10 20 15 // 2 + 4 + 3 = 9
// 30 + 15 // 6 + 3 = 9
/// 46 // 9
///////////////////////////////////
int arr[100000+5];
int main(){
    int t, n, x;
    ll maxP = 0, sum = 0;
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 0; i<n; ++i){
            cin >> arr[i];
            sum += arr[i];
            maxP += (arr[i]/x) + ( arr[i]%x != 0 ); // 0 1 //
        }
        cout << (sum/x) + ( sum%x != 0 ) << " " << maxP << endl;
        sum = 0, maxP = 0;
    }

    return (0);
}
