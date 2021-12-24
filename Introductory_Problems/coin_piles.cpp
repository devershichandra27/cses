#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    long t;
    cin >> t;
    while(t--){
        long a ,b;
        cin >> a >>b;
        auto mini = min(a,b);
        auto maxi = max(a,b);
        auto sum = mini + maxi;
        if(sum%3){
            cout << "NO\n";
        }else {
            if(mini <(maxi/2)){
                cout << "NO\n";
            }else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
