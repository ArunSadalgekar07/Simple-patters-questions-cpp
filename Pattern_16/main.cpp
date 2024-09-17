#include <iostream>
using namespace std;
/*
A
B C 
D E F
G H I J
*/
int main() {
    int n;
    cout << "Enter the number for patter 16 :"<<endl;
    cin >> n;

    int row = 1;
    char start = 'A';

    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout << start <<" ";
            col++;
            start++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}