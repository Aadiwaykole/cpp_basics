#include <iostream>
using namespace std;

int main (){

    int row;

    for (row=1; row<=5; row++){
      for(int col=1; col<=row; col=col+1){
        cout << "* ";
      }
      cout << endl;
    }
   

}