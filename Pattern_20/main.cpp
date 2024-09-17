#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the numer for Pattern 17 : "<<endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        //print the spaces here
        int space = n- row;
        while(space){
            cout << " ";
            space = space -1;
        }

        //print the stars here
        int col =1;
        while(col<=row){
            cout<<"*" ;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}