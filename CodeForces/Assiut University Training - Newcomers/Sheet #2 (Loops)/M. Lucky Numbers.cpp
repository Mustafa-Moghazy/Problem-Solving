/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    bool print = false;
    for(int i=a; i<=b; i++){
        int temp = i;
        bool f = true;
        while( temp > 0){
            if( temp % 10 != 4 && temp % 10 != 7 ){
                f = false;
                break;
            }
            temp /= 10;
        }
        if(f){
            cout<< i << " ";
            print = true;
        }
    }
    if(! print )
        cout<< -1;

    return (0);
}
