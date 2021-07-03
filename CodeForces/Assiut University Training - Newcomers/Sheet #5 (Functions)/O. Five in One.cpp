/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int a [105];
int Find_Max(int n, int a[]){
    int Max = a[0];
    for(int i=0; i<n; i++)
        if(a[i] > Max)
            Max = a[i];
    return Max;
}

int Find_Min(int n, int a[]){
    int Min = a[0];
    for(int i=0; i<n; i++)
        if(a[i] < Min)
            Min = a[i];
    return Min;
}
int N_Prime(int n, int a[]){
    int c = 0;
    for(int i=0; i<n; i++){
        bool f = true;
        if(a[i]==1) f = false;
        for(int j=2; j<=sqrt(a[i]); j++){
            if(a[i]%j == 0)
                f = false;
                break;
        }
        if(f)
            c++;
    }
    return c;
}

int N_Palindrome(int n, int a[]){
    int c = 0;
    for(int i=0; i<n; i++){
        int temp = a[i], rev = 0;
        while(temp){
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        if(a[i] == rev)
            c++;
    }
    return c;
}
int Max_Divisors(int n, int a[]){
    int Max = 0, temp = 0;
    for(int i=0; i<n; i++){
        int c = 0;
        for(int j=1; j<=a[i]; j++){
            if( a[i] % j == 0 )
                c++;
        }

        if( c == temp )
            Max = max( Max, a[i] );
        else if( c > temp ){
            temp = c;
            Max = a[i];
        }

    }
    return Max;
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    cout << "The maximum number : " << Find_Max(n, a) << endl
         << "The minimum number : " << Find_Min(n, a) << endl
         << "The number of prime numbers : " << N_Prime(n, a) << endl
         << "The number of palindrome numbers : " << N_Palindrome(n, a) << endl
         << "The number that has the maximum number of divisors : " << Max_Divisors(n, a);

    return (0);
}
