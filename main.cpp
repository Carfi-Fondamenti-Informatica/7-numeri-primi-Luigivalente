#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n, i=2;
    cin >> n;
    if(primo(n,i)){
        cout << "numero primo"<<endl;
    } else {
        cout << "numero non primo"<<endl;
    }
    return 0;
}
