#include <iostream>
using namespace std;
/*
Enter the number for Pattern 3 : 
5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5

*/
int main() {
    int n;
    cout << "Enter the number for Pattern 3 : "<<endl;
    cin >> n;

    int row = 1 ;
    while(row <= n){
        int col = 1;
        while(col<=n){
            cout << " "<<col;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}