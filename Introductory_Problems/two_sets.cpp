#include <iostream>
#include <unordered_set>
using namespace std;
 /*
 7
 1 2 3 4 5 6 7
 target_sum =14
 exists? 6+3+5
1 7 3 5
2 6 4
 8
 1 2 3 4 5 6 7 8
 target_sum = 18
1 8 3 6
2 7 5 4
 
 */


int main(){
    long long n;
    cin >> n;

    long long sum = n*(n+1)/2;
    
    if(sum&01){
        cout << "NO";
    }else {
        cout << "YES\n";
        unordered_set<int> l;
        int i=n;
        sum = sum/2;
        while(sum){
            if(i<=sum){
                l.insert(i);
                sum -=i;
            }
            i--;
        }
        cout << l.size() << endl;
        auto iq = l.begin();
        while(iq!=l.end()){
            cout << (*iq) << " ";
            iq++;
        }cout <<endl;
        i = 1;
        cout << n-l.size() << endl;
        while(i <=n){
            if(l.count(i)==0){
                cout << i << " ";
            }
            i++;
        }
    }
}