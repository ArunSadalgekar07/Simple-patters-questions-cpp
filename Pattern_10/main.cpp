#include <iostream>
using namespace std;
/*
Enter the number for pattern 10 : 5
1
2 1       
3 2 1     
4 3 2 1   
5 4 3 2 1 */
int main() {
    int n;
    cout <<"Enter the number for pattern 10 : ";
    cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col<=row)
        {
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;        
    }

    return 0;
}