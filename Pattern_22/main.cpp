#include <iostream>
using namespace std;
/*
Enter the number for pattern 22 : 
5
 *****
  ****
   ***
    **
     *
*/

int main() {
    int n;
    cout << "Enter the number for pattern 22 : "<<endl;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        int space = 1;

        while (space <= row)
        {
            cout << " ";
            space++;
        }

        while(col<= n-row+1){
            cout<< "*";
            col++;
        }
        
        
        
        cout<<endl;
        row++;
        
    }
    
    return 0;
}