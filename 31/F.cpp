#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){
    int N =0; 
    int Total= 0;
    int a = 1;
    int b = 2;
    cin >> N;
    
    if(N >= 1 && N <= 40){
        if(N == 1){
            cout << a;
        }
        else{
            for(int i = 1; i < N; i++){
                if(i == 1){
                    Total += b;
                    b = a + b;
                    a = Total;
                }else{
                    Total += b;
                    a = b;
                    b = Total;
                    Total = a;
                }
  
            }
            cout << a ;   

        }
       
    }
    return 0;
}