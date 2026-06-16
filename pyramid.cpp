#include <iostream>
using namespace std;

int main(){
    int n=3, a;
    for(int a=0; a<n; a++){
        for (int b=0; b<n-a-1; b++ ){
            cout <<"  ";        
        }
        for (int b=1; b<=a+1; b++){
            cout<< b<< " ";
            
        }
        for (int b=a; b>0; b--) {
            cout <<b << " ";
        }
        //ch++;
        cout << endl;
    }




    return 0;
}