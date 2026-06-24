#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans =0, pow =1;
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem*pow;
        pow *= 10;

    }
    return ans;
}

int BinaryToDec(int binNum){
    int ans = 0, pow = 1;
    while (binNum > 0) {
        int rem = binNum % 10;
        binNum /= 10;
        ans += rem*pow;
        pow *= 2;
    
    }
    return ans;
}

int main(){
    //int decNum = 134;
    int binNum = 1011100;
    //cout << decToBinary(decNum) << endl;
    cout << BinaryToDec(binNum) << endl;
    return 0;
}
