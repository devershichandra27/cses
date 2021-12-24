#include <iostream>
#include <vector>
using namespace std;


int main(){
    long n;
    cin>> n;
    
    long prev;
    cin >> prev;

    n--;
    long result = 0;
    while(n--){
        long curr;
        cin>> curr;
        if(prev<=curr){
            prev = curr;
        }else{
            result += abs(prev-curr);
        }
    }
    cout << result;
    return 0;
}