#include <iostream>

using namespace std;

long count_rep(string str){
    long left = 0, right = 0;
    long len = str.size();
    long max_size = 0;
    while(right<len){
        while(str[left]!=str[right]){
            left++;
        }
        max_size = max(max_size, right-left+1);
        right++;
    }
    return max_size;
}


int main(){
    string str;
    cin >> str;
    cout << count_rep(str);
    return 0;
}