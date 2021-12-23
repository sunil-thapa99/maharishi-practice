#include <iostream>
#include <math.h>

using namespace std;

int isMadhavArrayFunc(int a[], int len){
    int n = 1;
    int sum = 0;
    int prevSum = 0;
    int startIdx = 0;
    int endIdx = 0;
    int madhavLength = 1;
    int currentLength = 1;
    int isMadhavArray = 0;
    while (currentLength <= len)
    {
        if (madhavLength == currentLength){
            for (int i=startIdx; i<=endIdx; i++){
                sum += a[i];
            }
        }else{
            isMadhavArray = 0;
        }
        if ((prevSum == sum) || (startIdx == endIdx)){
            prevSum = sum;
            sum = 0;
            isMadhavArray = 1;
        }
        else{
            isMadhavArray = 0;
            break;
        }
        if (currentLength == len){
            break;
        }else{
            startIdx = endIdx + 1;
            endIdx = startIdx + n;
            if((startIdx < len) && (endIdx < len)){
                n++;
            }else{
                endIdx = len-1;
                n = endIdx - startIdx;
            }
            madhavLength = n*(n+1)/2;
            currentLength = endIdx + 1;
        }
    }
    return isMadhavArray;
    
}

int  main(){
    int a[] = {3, 1, 2, 3, 0};
    int len = sizeof(a)/sizeof(a[0]);
    cout << isMadhavArrayFunc(a, len) << endl;
}