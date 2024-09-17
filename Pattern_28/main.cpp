#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number for pattern 28 : ";
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col =1;
        //1st triangle
        while(col <= n-row+1){
            cout<<col;
            col++;
        }

        //2nd tringle
        int start = 2* row - 2;
        while (start)
        {
            cout<<"*";
            start--;
        }

        //3rd trinhgle
        col = row;
        int initial = n - col +1;
        while (col <= n)
        {
            cout<< initial;
            initial--;
            col++;
        }
        
        
        cout<<endl;
        row++;
    }
    
    return 0;
}