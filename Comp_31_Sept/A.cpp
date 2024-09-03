#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int N, K;
    cin >> N;
    cin >> K;
    if(N >= 1 && N <= 100 && K  >= 1 && K <= 1000 && K >= N){

        if(N == 1){
            cout << K;
        }
        else{
            int Interval = K - (N - 1);
            int Total = Interval / N;
            cout << Total;
        }
    }
    return 0;
}