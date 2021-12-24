#include <iostream>

using namespace std;


int main(){
    long n;
    cin >> n;
    for(long i = 1; i<=n; i++){
        long total_combinations = ((i*i)*((i*i)-1))/2;
        long unacceptable_combinations = 4*(i-1)*(i-2);
        cout << total_combinations-unacceptable_combinations <<endl;
    }
    return 0;
}