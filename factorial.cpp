#include <iostream>
using namespace std;

int main(){
    int n, a=1, sum=0;

    cout<< "enter the last number : ";
    cin>> n;

    for(a=1; n>=a; a++) {
        if (a%3 == 0) {
      sum += a;
    }

    //a++;
}
    

    cout <<"The sum of all number who are devisible by 3 is "<<sum <<endl;


}