#include <iostream>

using namespace std;

int main(){
    long n;
    cin >> n;
    while(n!=1){
        printf("%ld ", n);
        if(n%2){
            n = 3*n;
            n++;
        }else{
            n = n/2;
        }
    }
    cout << n;
    return 0;
}