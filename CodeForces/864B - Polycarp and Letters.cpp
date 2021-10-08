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
int arr[150];
int main() { Fast_Code();
    int n, ans = 0;
    cin >> n;
    string s; cin >> s;
    for(int i=0; i<s.size(); ++i){
        if( islower(s[i])){
            memset(arr, 0, sizeof arr);
            int c = 1;
            arr[s[i]]++;
            for(int j=i+1; j<s.size(); ++j){
                if(islower(s[j])){
                    if(arr[s[j]] == 0){
                        c++;
                        arr[s[j]]++;
                    }
                }else
                    break;
            }
            ans = max(ans, c);
        }
    }
    cout << ans << endl;
    return (0);
}
