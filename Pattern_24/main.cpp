#include <iostream>
using namespace std;

/*
Enter the number for pattern 24 : 
4
   1
  22
 333
4444

*/
int main() {
    int n;
    cout << "Enter the number for pattern 24 : "<<endl;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        int col =1;
        int space = 1;
        while (space <= n-row)
        {
            cout<<" ";
            space++;
        }
        while (col <= row )
        {
            cout << row ;
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
    return 0;
}