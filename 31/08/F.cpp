#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int N, K;
    cin >> N;
    cin >> K;

    if(N == 1){
        cout << K;
    }
    else{
        int Interval = K - N;
        int Total = Interval / N;
        cout << Total;
    }
    return 0;
}