#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;


// map<pair<long, long>, long>dp;

long find_min(vector<long>&arr, long curr_sum, long total_sum, long index){
    if(index==0){
        return abs((total_sum-curr_sum) - curr_sum);
    }
    return min(find_min(arr, curr_sum+arr[index], total_sum, index-1), find_min(arr, curr_sum, total_sum, index-1));
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<long> arr;
    long sum = 0;
    while(n--){
        long temp;
        cin >>temp;
        sum += temp;
        arr.push_back(temp);
    }

    cout << find_min(arr, 0, sum, arr.size()-1);
    return 0;
}
