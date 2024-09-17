#include <iostream>
using namespace std;
/*
A
B B
C C C
D D D D 
*/

int main() {
    int n;
    cout << "Enter the number for pattern 15 : "<<endl;
    cin>>n;

    int row = 1;
    
    while (row<=n)
    {
        int col = 1;
        while (col <=row)
        {
            char ch = 'A' + row - 1;
            cout<< ch <<" ";
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    return 0;
}