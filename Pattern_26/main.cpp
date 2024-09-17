#include <iostream>
using namespace std;

/*
Enter the number for pattern 26 : 
4
1234
 234
  34
   4

*/
int main() {
    int n;
    cout << "Enter the number for pattern 24 : "<<endl;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        int space = 1;
        while (space <= row-1)
        {
            cout<<" ";
            space++;
        }
        int col = row;
        while (col <= n )
        {
            cout << col ;
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
    return 0;
}