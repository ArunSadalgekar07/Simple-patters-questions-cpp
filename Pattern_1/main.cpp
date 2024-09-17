#include<iostream>
using namespace std;
/*
Enter the number for Pattern 1 : 
5
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  *
 
 */
int main(){
    int n;
    cout << "Enter the number for Pattern 1 : " <<endl;
    cin >> n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout << " * " ;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}