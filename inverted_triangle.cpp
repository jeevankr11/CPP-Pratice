#include <iostream>
using namespace std;

int main(){
    int n=9 ;
//char ch= 'A';
    for(int a=0; a<n; a++){
        for (int b=0; b<a; b++ ){
            cout <<"  ";        
        }
        for (int b=0; b<n-a; b++){
            cout<< (a+1)<< " ";
        }
        //ch++;
        cout << endl;
    }




    return 0;
}