// Qs: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    int **seq = new int*[n];
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        seq[i] = new int[k];
        for(int j=0; j<k; j++){
            cin >> seq[i][j];
        }
    }
    for(int i=0; i<q; i++){
        int k, l;
        cin >> k >> l;
        cout << seq[k][l] << endl;
    }
    return 0;
}