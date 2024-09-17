#include <iostream>
using namespace std;
/*
Enter the number for Pattern 4 : 
5
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1

*/
int main() {
    int n;
    cout << "Enter the number for Pattern 4 : "<<endl;
    cin >> n;

    int row = 1;

    while(row<=n){
        int col = 1;
        while (col<=n)
        {
            cout << " "<<n-col+1;
            col++;
        }
        cout << endl;
        row++;
     }
    return 0;
}