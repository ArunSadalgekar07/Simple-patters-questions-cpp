#include <iostream>
using namespace std;
/*
Enter the number for Pattern 6 :
5
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

*/
int main() {
    int n;
    cout << "Enter the number for Pattern 7 :"<<endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " "<<row;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}