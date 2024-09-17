#include <iostream>
using namespace std;
/*
Enter the number for Pattern 13 :
5
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/
int main() {
    int n;
    cout << "Enter the number for Pattern 13 : "<<endl;
    cin >> n;

    int row = 1;
    char start = 'A';
    while (row <= n)
    {
        int col = 1;
        
        while (col <=n)
        {
            cout << start << " ";
            start++;
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    return 0;
}