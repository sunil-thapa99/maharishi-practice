#include <iostream>

using namespace std;

int isSquare(int n){
    for (int i=0; i<=n/2; i++){
        if (i*i == n){
            return 1;
        }
    }
    return 0;
}

int main(){
    cout << isSquare(0) << endl;
    return 0;
}