#include <iostream>

using namespace std;

int henry (int i, int j){
    int sum = 0;
    int max = INT32_MAX;
    int count = 0;
    int perfect_sum = 0;
    for (int m=2; m <= max; m++){
        sum = 0;
        for (int n=1; n<=m/2; n++){
            if (m%n == 0){
                sum+=n;
            }
        }
        if (sum == m){
            count++;
            if (count == i || count ==j){
                perfect_sum += sum;
            }else if(count > j){
                break;
            }
        }
    }
    return perfect_sum;
}

int main(){
    cout << henry(1, 3) << endl;
    return 0;
}