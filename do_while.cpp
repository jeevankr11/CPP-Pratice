#include <iostream>
using namespace std;

int main() {
    int n=11;
    bool isPrime = true;
    //     cout <<"Enter the number for checking if prime or composit : ";
    // cin >> a;

    for (int i=2; i<n-1; i++ ){
        if (n%i==0) {
            isPrime = false;
            break;

            }
           //lse {
                //cout << "The number " <<a <<"is a composit number"<<endl;
            }
        
    if(isPrime == true){
        cout << "The number is prime\n";
    } else{
        cout<< "The number is not a prime\n" ;

    }

    




    // isPrime -> true-> prime
    // isPrime -> false -> non prime
    return 0;
}