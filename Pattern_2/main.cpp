#include<iostream>
using namespace std;
/*Enter the number for Pattern 2 : 5
 1 1 1 1 1
 2 2 2 2 2
 3 3 3 3 3
 4 4 4 4 4
 5 5 5 5 5
 
 */

int main(){
    int n;
    cout << "Enter the number for Pattern 2 : ";
    cin >> n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout << " " <<row;
            col++;
        }
        cout << endl;
        row++;
    }
}