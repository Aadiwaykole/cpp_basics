#include <iostream>
using namespace std ;

int fun (int i , int n ){
    if (i<1){
        return ;
    }
    fun(i-1, n);
};



int main (){

    int n ; 
    cout << "enter the value of n ";

    cin >>  n;
}