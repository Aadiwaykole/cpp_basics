#include <iostream>
using namespace std;

int main(){

    int row, col,n;
    cout<< "enter the value of n :";
    cin >> n;
    

    // for (row=1; row<=n; row++){

    //     //space print 

    //     for (col=1; col<=n-row; col++)
    //         cout <<"  ";

    //     //star print 

    //     for (col=1; col<=row; col++){  
    //         cout <<"* ";
    //      }
    //     cout << endl;

    // }

    for (row=1; row<=5; row++){
        for (col=1; col<=5-row;col++)
        cout << "  ";

        for(col=1;col<=row; col++){
            cout << row<<" ";

        }
        cout << endl;
    }
}