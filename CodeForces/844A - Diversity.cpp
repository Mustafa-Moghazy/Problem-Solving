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
int freq[50];
int main() { Fast_Code();
   string s; cin >> s;
   int n; cin >> n;
   for(int i=0; i<s.size(); ++i)
       freq[s[i]-'a']++;
   int c = 0;
   for(int i=0; i<=26; ++i)
       if(freq[i] > 0) c++;
   if(s.size() < n)
       cout << "impossible" << endl;
   else {
       if(c >= n) cout << 0 << endl;
       else cout << n - c << endl;

   }
    return (0);
}
