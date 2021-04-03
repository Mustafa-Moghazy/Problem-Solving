/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int sign;
    for(int i=0; i<s.size(); ++i){
        if(!(isdigit(s[i])) ){
            sign = i;
            break;
        }
    }
    string l = s.substr(0, sign);
    string r = s.substr(sign+1 , s.size());

    if(s[sign] == '+')
        cout<< stoi(l) + stoi(r);
    else if( s[sign] == '-' )
        cout<< stoi(l) - stoi(r);
    else if(s[sign] == '*')
        cout<<stoi(l) * stoi(r);
    else
        cout<<stoi(l) / stoi(r);

    /*************************************

    string s;
    cin>>s;
    int sin = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+' || s[i] =='-' || s[i]=='*' || s[i]=='/'){
            sin = i;
            break;
            }
    }
    string b = s.substr( 0 , sin );
    string a = s.substr(sin+1, s.size());
    long long sumb = 0 , suma=0;
    int mb = 1;
    for(int i=sin-1;i>=0;i--){
            sumb+= (s[i] - 48)*mb;
            mb=mb*10;
    }
    int ma = 1;
    for(int i=s.size()-1; i>=sin+1; i--){
            suma+= ((s[i] - 48)* ma);
            ma=ma*10;
    }
    //cout<<suma<<endl<<sumb<<endl;
    if(s[sin]=='+') cout<<suma+sumb;
    else if(s[sin]=='-') cout<<sumb-suma;
    else if(s[sin]=='*') cout<<suma*sumb;
    else if(s[sin]=='/') cout<<sumb/suma;

 ********************************************/

    return (0);
}


