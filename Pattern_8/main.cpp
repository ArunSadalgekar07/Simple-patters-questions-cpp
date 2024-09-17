#include <iostream>
using namespace std;
/*
Enter the number for Pattern 8 :
5
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
*/
int main() {
    int n;
    cout << "Enter the number for Pattern 8 :"<<endl;
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        
        while (col <= row)
        {
            cout << " " <<count;
            count++;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}