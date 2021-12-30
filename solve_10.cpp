#include <iostream>

using namespace std;

int *solve10(){
    static int a[2];
    int ten_factorial = 1;
    int x = 0;
    int y = 0;
    
    bool factorial_found = false;
    for(int i=1; i<=10; i++){
        ten_factorial *= i;
    }
    for (x=0; x<10; x++){
        int x_factorial = 1;
        if (x>0){
            for (int i=1; i<=x; i++){
                x_factorial *= i;
            }
        }
        for (y=0; y<10; y++){
            int y_factorial = 1;
            if (y>0){
                for (int i=1; i<=y; i++){
                    y_factorial *= i;
                }
            }
            if (x_factorial + y_factorial == ten_factorial)
            {
                factorial_found = true;
                break;
            }
        }
        if (factorial_found){
            break;
        }
    }
    
    a[0] = (x!= 10) ? x : 0;
    a[1] = (y != 10) ? y : 0;
    return a;
}

int main(){
    int *a = solve10();
    for (int i=0; i<2; i++){
        cout << a[i] << endl;
    }
    return 0;
}