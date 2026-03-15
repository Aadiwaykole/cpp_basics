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

    // for (row=1; row<=5; row++){

    //     //space print 
    //     for (col=1; col<=5-row;col++){

    //             cout <<"  ";
    //     }
    //     // cout << "  ";

    //     //number print 
    //     for(col=1;col<=row; col++){
    //         cout << row<<" ";

    //     }
    //     cout << endl;
    // }

//         1 
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5


// for print number 12345

    // for (row=1; row<=n; row++){

    //     //space print 
    //     for (col=1; col<=n-row;col++){

    //             cout <<"  ";
    //     }
    //     // cout << "  ";

    //     //number print 
    //     for(col=1; col<=row; col++){
    //         cout << col<<" ";

    //     }
    //     cout << endl;
    // }

//           1 
//         1 2
//       1 2 3
//     1 2 3 4
//   1 2 3 4 5
// 1 2 3 4 5 6


    for (row=1; row<=n; row++){

        //space print 
        for (col=1; col<=n-row;col++){

                cout <<"  ";
        }
        // cout << "  ";

        //number print 
        for(col=1; col<=row; col++){
            char ch = 'A' + col - 1;
            cout << ch<<" ";

        }
        cout << endl;
    }

}