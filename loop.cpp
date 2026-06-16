#include <iostream>
using namespace std;


    int main() {
    int a, b, sum=0;
    int n;
    cout <<"Enter the first positive number :";
    cin >> a;
    b = a;
    cout <<"Enter last positive number : ";
    cin >> n;

    while (n >= a) {
        if(a%2 == 0) {
            b= a+1;
        }
        
        sum += a;

        a = a+2;

    }

    cout <<"Sum of all odd number between " <<b <<" and " << n << " is " << sum << endl;

    // for (int a=1; a<=n; a++){
    //     sum += a;
    // }

    //cout << "sum of all positve number = " << sum << endl;
    // while (n <= a) {
    //     cout << n+a << " ";
    //     sum +=n;

    //     n++;
    // }
    //     cout <<sum << endl;

        return 0;
}