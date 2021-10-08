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
int freq[150];
int arr[150];
int main() { Fast_Code();
    int n, c = 0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if(freq[arr[i]] == 0) c++;
        freq[arr[i]]++;
    }
    /// freq of first element ///
    int t = freq[arr[0]];
    if(c!=2 || t != n/2){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        for(int i=1; i<=100; ++i){
            if(freq[i]) cout << i << " ";
        }
    }

    return (0);
}
