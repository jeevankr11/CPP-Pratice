#include <iostream>
using namespace std;

int main(){
    int n=4, m=3, a;
    for(int a=0; a<n; a++){
        for (int b=0; b<n-a-1; b++ ){
            cout <<"  ";        
        }
        cout << "*";
        if (a !=0){
        for (int b=0; b<2*a-1; b++){
            cout<< "  ";
            }

        cout<< "*";
        }
        cout << endl;
    }
    
for(int a=0; a<m; a++){
        for (int b=0; b<a+1; b++ ){
            cout <<"  ";        
        }

    cout << "*";
        
    
    if (a != 0) {
        for (int b=0; b<m-a-1; b++) {
            cout << "  ";

        }

        cout << "*";
        // for (int b=0; b<m-a; b++){
        //     cout<< "*"<< " ";
            
        // }
        // for (int b=0; b<m-a-1; b++) {
        //     cout <<"*" << " ";
        // }
        
        cout << endl;
    }

}

    return 0;
}