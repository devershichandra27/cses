#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

string can_be_palindrome(string & str){
    unordered_map<char, long long>freq_map;
    for(char c : str){
        freq_map[c]++;
    }
    bool seen_odd = false;
    for(auto iq : freq_map){
        if(iq.second%2){
            if(seen_odd){
                return "NO SOLUTION";
            }
            seen_odd = true;
        }
    }
    string palindrome = "";
    string mid_part = "";
    for(auto iq : freq_map){
        auto counter = iq.second;
        if(counter%2){
            while(counter--){
                mid_part.push_back(iq.first);
            }
        }else {
            counter = counter/2;
            while(counter--){
                palindrome.push_back(iq.first);
            }
        }
    }
    string rev_palindrome = palindrome;
    reverse(rev_palindrome.begin(), rev_palindrome.end());

    return palindrome + mid_part + rev_palindrome;
}

int main(){
    string str;
    cin >> str;
    cout << can_be_palindrome(str);
    return 0;
}