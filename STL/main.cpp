#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int, int> p = {10, 20};

    cout << p.first << endl;   // 10
    cout << p.second << endl;  // 20


    pair<int, int> arr[]= {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[1].second << endl;  // 4

    return 0;
}