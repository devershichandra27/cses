#include <iostream>
#include <vector>


using namespace std;


void tower_of_hanoi(int n, char start, char end, char aux, vector<pair<char, char> >&path){
    if(n==1){
        path.push_back(make_pair(start, end));
        return;
    }
    tower_of_hanoi(n-1, start, aux, end, path);
    path.push_back(make_pair(start, end));
    tower_of_hanoi(n-1, aux, end, start, path);
}



int main(){
    int n;
    cin>>n;
    vector<pair<char,char > > path;
    tower_of_hanoi(n, '1', '3', '2', path);
    cout << path.size() <<endl;
    for(auto k :path){
        cout << k.first << " " << k.second <<endl;
    }

    return 0;
}