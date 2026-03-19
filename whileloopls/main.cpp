#include <iostream>
using namespace std;

int main (){

    int n ;
    cout << "enter the value of n :";
    cin >> n;

    int i=1;

    // while (i <=10){
    //     cout << n*i << " ";
    //     // cout << endl;
    //     i = i+1;
    //     cout << endl;
    // }

    
    // while (i<= n){
    //     if (i %2 ==0){
    //         cout << i <<" ";
    //     }
    //     i++;
    //     cout << endl;
    // }


    //odd number printing 
    // while (i<=n){
    //     if(i %2 !=0){
    //         cout << i <<" ";
    //     }
    //     i++;    
    // }


    // print the sum of even number

    // int sum = 0;

    // while (i<= n){
    //     if(i %2==0){
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << "Sum of even numbers: " << sum << endl;

    // int sum = 0;
    // do {
    //     sum += i;
    //     i++;
    // }
    // while (i <= n);


    // break and continue statement

    // while (i<=n ){
    //     if (i==6){

    //         break;

    //     }
    //      cout<< i <<" ";
    //     i++;
    // }

    // for (i =1; i <= n ; i ++){
    //     if (i %3 ==0){
    //         continue;
    //     }   
    //     cout << i <<" ";
    // }

    // for (i =1; i <=n; i++){
    //     if (i ==1){
    //         cout<< "aditya ";
    //     }
    //     else if (i ==2){
    //         cout << "kumar ";
    //     }
    //     else if (i ==3){
    //         cout << "yadav ";
    //     }
    //     else {
    //         cout << "aditya kumar yadav ";
    //     }
    // }


    // switch 

    // switch(n){

    //     case  1:
    //         cout << "monday ";
    //         break;

    //     case 2:
    //         cout << "tuesday ";
    //             break;

    //     case 3:
    //         cout << "wednesday ";
    //             break;

    //     default:
    //         cout << "invalid input ";
    // }

    while (i <= n){

        if (i %3 ==0 || i %5 ==0 ){

            continue;
        }
          
        cout << i <<" ";
        i++;
    }

}