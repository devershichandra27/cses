#include <iostream>
#include <vector>

using namespace std;

vector<long> util(long c){
    vector<long>result;
    long curr = 1;

    while((curr<=c)){
        result.push_back(curr);
        curr+=2;
    }
    curr = 2;
    while((result.size()<c)){
        result.push_back(curr);
        curr+=2;
    }
    
    return result;
}

bool is_beautiful(vector<long> & arr){
    if(arr.size()==1)
        return true;
    long prev = arr[0];
    int right = 1;
    int len = arr.size();
    while(right<len){
        long curr = arr[right];
        right++;
        if(abs(curr-prev)<=1)
            return false;
        prev = curr;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    long c;
    cin >> c;
    if(c==4){
        cout << 2 <<" " << 4 << " " << 1 << " " << 3;
    }
    vector<long> arr = util(c);
    if(is_beautiful(arr)){
        for(long i : arr){
            cout << i << " ";
        }
    }else{
        cout << "NO SOLUTION";
    }
    return 0;
}
