#include <iostream>
using namespace std;
/*
A B C
B C D
C D E
*/
int main() {
    int n;
    cout << "Enter the numer for Pattern 17 : "<<endl;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        int col = 1;
        char start = 'A' + row + col -2;

        while (col <= n)
        {
            cout << start <<" ";
            start++;
            col++;
        }

    cout<<endl;
    row++;
    }
    

    return 0;
}