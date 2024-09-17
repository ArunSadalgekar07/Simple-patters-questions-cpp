#include <iostream>
using namespace std;
/*
Enter the number for Pattern 6 :
5
 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/

int main() {
    int n;
    cout << "Enter the number for Pattern 6 :"<<endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col<= row)
        {
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}