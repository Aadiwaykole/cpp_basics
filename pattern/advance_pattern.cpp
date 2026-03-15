#include <iostream>
using namespace std ;

int main (){
    int row, col;
    int n;
    cout<<"enter the number :";
    cin >> n ;


    // space start space
    
    // for (row=1; row<=n; row++){
        
    //     //space print 

    //     for (col=1; col<= n-row; col++){
    //         cout << "  ";

    //     }

    //     //start print 

    //     for (col=1; col<=2*row-1; col++){
    //         cout << "*"<< " ";
    //     }
    //     cout << endl;
    // }

//  * * * * * * * * * * * 
// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         *


    // for(row=n ; row>=1; row--){

    //     //space printinig

    //     for (col=1; col<n-row; col++){
    //         cout << "  ";

        
    //     }
    //     //star pattern 

    //     for(col=1; col<=2*row-1; col++){
    //         cout <<"* ";
    //     }

    //     cout<< endl;5

    // }


// * * * * * * * * * *
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *




//     for(row=n; row>=1; row--){

//         //start print 

//         for (col=1; col<=row; col++)
//         cout <<"* ";


//         //print space 

//         for (col=1; col<=2*n-2*row; col++)
//         cout <<"  ";

//         //print *

//         for (col=1; col<=row; col++)
//         cout<<"* ";

//         cout<< endl;
//    }


   
//         //start print 

//         for(row=1; row<=n; row++){

//         //start print 

//         for (col=1; col<=row; col++)
//         cout <<"* ";


//         //print space 

//         for (col=1; col<=2*n-2*row; col++)
//         cout <<"  ";

//         //print *

//         for (col=1; col<=row; col++)
//         cout<<"* ";

//         cout<< endl;
//    }



        for (row=1; row<=4; row++){
            
            for(col=1; col<=4-1; col++)
            cout<< " ";

            for (col=1; col<= row-1; col++)
            cout<<"*"<<


            cout<<endl;
        }
    
   
    
}
