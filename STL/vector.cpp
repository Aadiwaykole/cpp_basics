#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.emplace_back(40);

    cout << v[0] << " " << v[1] << " " << v[2];

     cout << v.at(3) << endl;  // 40

    return 0;

    


}