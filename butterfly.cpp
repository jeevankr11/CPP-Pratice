#include <iostream>
using namespace std;

int main(){
    int n=4, a;
    for(int a=0; a<n; a++){
        for (int j=0; j<=a; j++) {
            cout << "*" <<" ";
        }
        for (int b=0; b<2*(n-a)-5; b++) {
            cout << "  ";
        }

    for (int j=0; j<=a; j++) {
            cout << "*" <<" ";
    }
        
        cout << endl;
    }
}