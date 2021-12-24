#include <iostream>

using namespace std;

long long power(long long y){
    long long mod = 1e9+7;
    long long result = 1;
    long long x = 2;
    
    while(y){
        if(y&01){
            result = ((result*x)%mod);
        }
        y = y>>1;
        x = (x*x)%mod;
    }

    return result;
}

int main(){
    long n;
    cin >> n;
    cout << power(n);
}