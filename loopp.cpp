#include <iostream>
using namespace std;


    int main() {
    int a;
    //int n = 1;
    // cout <<"Enter last positive number : ";
    // cin >> a;
    // while (n <= a) {
    //     cout << n << " ";
    //     n++;
    // }
    //     cout << endl;
        
    cout <<"Enter age : ";
    cin >> a;
    if (a >= 18 && a < 60) {
        cout <<"You can vote and drive in India\n";
        }
        else if (a >= 60) {
            cout <<"You can vote but retire in India\n";
            }
            else {
                cout <<"You can't vote and drive in India\n";
                    }
    //cout <<"Enter second number : ";
    //cin >> b;
    
    // int sum = a + b;
    // int sub = a - b;
    
    
    // cout << "The sum of number is " << sum << endl;
    // cout << "The diff of number is " << sub << endl;
 
            
    return 0;
            
}