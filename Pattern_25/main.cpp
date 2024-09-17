#include <iostream>
using namespace std;

/*
Enter the number for pattern 25 : 
4
   1
  23
 456
78910

*/
int main() {
    int n;
    cout << "Enter the number for pattern 25 : "<<endl;
    cin >> n;

    int row =1;
    int count = 1;
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
            cout << count ;
            count++;
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
    return 0;
}