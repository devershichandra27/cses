#include <iostream>

using namespace std;

long get_num(long r, long c){
    bool row_flag = false;
    if(r>c)
        row_flag = true;
    long diff = abs(r-c);
    long n = max(r,c);
    long diag_element = (long long)((n*n) - (n-1));
    //n =3
    //row_flag = true
    // diff = 2
    // n = 4
    //diag_element = 13
    //row_inc = false
    bool row_inc = false;
    if((n-1)%2){
        row_inc = false;
    }else {
        row_inc = true;
    }

    long answer = diag_element;
    //answer = 13
    if(row_flag){
        if(row_inc){
            answer-=diff;
        }else {
            answer+=diff;
        }
    }else {
        if(row_inc){
            answer+=diff;
        }else {
            answer-=diff;
        }
    }

    return answer;

}


int main(){
    long t;
    cin >>t;
    while(t--){
        long y,x;
        cin >> y>>x;
        cout << get_num(y, x) <<endl;
    }
}