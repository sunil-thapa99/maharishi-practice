#include <iostream>
#include <cstdio>
#include <string>
using namespace std;



int main() {
    int a, b;
    string val[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int len = sizeof(val)/sizeof(val[0]);
    cin >> a;
    cin >> b;
    for (int i=a; i<=b; i++){
        if (i<10){
            cout << val[i-1] << endl;
        }else if(i%2 == 0){
            cout << "even" <<endl;
        }else{
            cout << "odd" <<endl;
        }
    }
    return 0;
}