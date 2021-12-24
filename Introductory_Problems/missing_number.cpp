#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    long n;
    cin >> n;
    long lim = n;
    n--;
    unordered_set<long>s;
    while(n--){
        long temp;
        cin >>temp;
        s.insert(temp);
    }
    for(int i=1; i<=lim; i++){
        if(s.count(i)==0){
            cout << i;
            break;
        }
    }
    return 0;
}