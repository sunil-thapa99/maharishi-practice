#include <iostream>

using namespace std;

int isPrime(int n){
    for (int i=2; i<=n/2; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

int findPorcupineNumber(int n){
    int first_prime = 0;
    int second_prime = 0;
    bool first = true;
    int porc_prime = 0;
    while (first){
        ++n;
        porc_prime = n;
        first_prime = isPrime(n);
        if ((n%10 == 9) && (first_prime)){
            bool second = true;
            while (second){
                ++n;
                second_prime = isPrime(n);
                if (second_prime){
                    second = false;
                }
            }
            if (n%10 == 9){
                first = false;
            }
        }
    }
    return porc_prime;
}

int main(){
    cout << findPorcupineNumber(139) << endl;
}