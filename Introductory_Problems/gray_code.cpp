#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
00
01
11
10


*/

vector<string> generate_gray_code(int n){
    if(n==1){
        vector<string> result;
        result.push_back("0");
        result.push_back("1");
        return result;
    }
    auto prev_list = generate_gray_code(n-1);
    auto new_list = prev_list;
    reverse(new_list.begin(), new_list.end());
    vector<string> result;
    for(string str : prev_list){
        result.push_back("0" + str);
    }
    for(string str : new_list){
        result.push_back("1"+str);
    }
    return result;
}


int main(){
    int n;
    cin>>n;
    vector<string> result = generate_gray_code(n);
    for(string str : result){
        cout << str <<endl;
    }
    return 0;
}