#include <iostream>
using namespace std;
/*
Enter the numer for Pattern 18 : 
5
E
D E
C D E
B C D E
A B C D E
*/
int main() {
    int n;
    cout << "Enter the numer for Pattern 18 : "<<endl;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        int col = 1;
        char start = 'A' + n -row;
        while (col <= row)
        {
            cout << start <<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    return 0;
}