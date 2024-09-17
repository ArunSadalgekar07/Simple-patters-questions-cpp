#include <iostream>
using namespace std;
/*
Enter the number for patter 9 : 5
 1
 2 3
 3 4 5
 4 5 6 7
 5 6 7 8 9
*/
int main() {
    int n;
    cout << "Enter the number for patter 9"<<endl;
    cin >>n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << " "<<value;
            value++;
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}