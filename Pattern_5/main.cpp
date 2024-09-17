#include <iostream>
using namespace std;
/*
Enter the number for Pattern 5 :
5
 1 2 3 4 5
 6 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
*/
int main() {
    int n;
    cout << "Enter the number for Pattern 5 :"<<endl;
    cin >> n;

    int row = 1;
    int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout << " "<<count;
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}