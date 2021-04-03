/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, rev = "";
    cin>>s;
    int n = s.size() - 1;
    bool f = true;
    for(int i=n; i>=0; i--)
            rev+=s[i];
    cout<<stoi(rev);
    for(int i=0; i<s.size()/2; i++){
        if(s[i] != s[n] ){
            f = false;
            break;
        }
        n--;
    }
    if(f)
        cout<<"\nYES";
    else
        cout<<"\nNO";

    /*********************************************
        int n, rev = 0, temp;
        cin>>n;
        temp = n;
        while( n > 0 ){
            rev = rev*10 + n%10;
            n=n/10;
        }
        cout<<rev<<endl;
        if( temp == rev )
            cout<<"YES";
        else
            cout<<"NO";
    ************************************************/

    return (0);
}
