#include <iostream>
using namespace std;

int main(){
    int n, b, a=1, sum=0;
    char ch = 'A' ;
    cout<< "enter the number : ";
    cin>> n;

    for(a=0; n>a; a++) {
        for(b=0; n>b; b++) {
            cout<< ch <<" ";
            ch++;
        }
       cout << endl;
    }

    


}