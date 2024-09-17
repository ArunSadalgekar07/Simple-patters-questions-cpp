#include <iostream>
using namespace std;
/*
Enter the number for Pattern 12 :
6
A B C D E F 
A B C D E F
A B C D E F
A B C D E F
A B C D E F 
A B C D E F
*/

int main() {
    int n;
    cout << "Enter the number for Pattern 12 :"<<endl;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + col - 1;
            cout << ch <<" ";
            col++;
        }
        cout<<endl;
        row++;
    } 
    return 0;
}