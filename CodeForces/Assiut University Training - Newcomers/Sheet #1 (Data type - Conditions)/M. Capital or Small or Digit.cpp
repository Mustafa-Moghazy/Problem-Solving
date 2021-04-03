/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a; cin>>a;
    if( a >= 'A' && a<= 'z' ){
        if( a >= 'a')
            cout<<"ALPHA\n"<<"IS SMALL";
        else
            cout<<"ALPHA\n"<<"IS CAPITAL";
    }else{
            cout<<"IS DIGIT";
    }


    /***************
     if( isalpha(a) ){
        if( a >= 'A' && a <= 'Z' )
            cout<<"ALPHA\n"<<"IS CAPITAL";
        else
            cout<<"ALPHA\n"<<"IS SMALL";
        }
        else if(isdigit(a))
            cout<<"IS DIGIT";
    ****************/

    return (0);
}


