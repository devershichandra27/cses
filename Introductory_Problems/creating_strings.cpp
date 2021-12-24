#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string>arr;
    do{
        arr.push_back(str);
    }while(next_permutation(str.begin(), str.end()));
    cout << arr.size()<<endl;
    for(string str : arr){
        cout <<str <<endl;
    }
    return 0;
}