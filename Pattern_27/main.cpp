#include <iostream>
using namespace std;
/*
Enter the number for pattern 27 : 
5
    1
   121
  12321
 1234321
123454321
*/

int main() {
    int n;
    cout <<"Enter the number for pattern 27 : "<<endl; 
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        int space = 1;
        //print the spaces (1st tringle)
        while(space<= n-row){
            cout << " ";
            space++;
        }

        //print the 2st triangle
        while (col <=row)
        {
            cout << col;
            col++;
        }


        //print the 3rd triangle
        int start = row -1;
        while (start)
        {
            cout << start ;
            start--;
        }
        


        cout<<endl;
        row++;
        
    }
    
    return 0;
}