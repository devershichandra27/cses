#include <iostream>

using namespace std;


int main(){
    long long n;
    cin >> n;
    
    long num_zeros = 0;
    for(long long i=5; n/i>=1; i=i*5){
        num_zeros += (n/i);
    }
    cout << num_zeros;
    return 0;
}