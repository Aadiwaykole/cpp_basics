#include <iostream>
using namespace std;

int sum (int a, int b ){
    int add = a+b;

    return add; 
};

void fun(){
    cout <<"hello everyone ";

};


int main (){

    int a,b;

    cin >> a >> b;


    //function call

    cout << sum(a,b)<< endl;

    fun();
};