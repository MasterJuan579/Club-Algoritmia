#include <iostream>
using std::cin;
using std::cout;


int main(){
    int N, Total;
    int a = 1;
    int b = 2;
    cin >> N;
    if(N >= 1 && N <= 40){

            for(int i = 0; i < N; i++){
                int a1 = 0;
                int b2 = 0;
                int x=1;
                int y=2;
                a1=y;
                b2=x+y;

                int *a1= &x;
                int *b2=&y;

                cout << x;
            }
            
        }
    
    return 0;
}