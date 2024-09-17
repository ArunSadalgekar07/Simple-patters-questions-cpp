#include <iostream>
using namespace std;
/*
Enter the number for pattern 14 : 
4
A B C D 
B C D E
C D E F
D E F G
*/

int main() {
    int n;
    cout << "Enter the number for pattern 14 : "<<endl;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;

        while (col<=n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}