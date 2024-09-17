#include <iostream>
using namespace std;

/*
Enter the number for pattern 23 : 
5
11111
 2222
  333
   44
    5
*/
int main() {
    int n;
    cout << "Enter the number for pattern 23 : "<<endl;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        int col =1;
        int space = 1;
        while (space < row)
        {
            cout<<" ";
            space++;
        }
        while (col <= n - row + 1)
        {
            cout << row ;
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
    return 0;
}