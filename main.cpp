#include <iostream>
using namespace std;

bool primo(int n, int i) {
    if(n==2){
        return true;
    }
    if(n==1){
        return false;
    }
    if (n % i == 0) {
        return false;
    } else {
        i++;
        if (i == n) {
            return true;
        } else {
            primo(n, i);
        }
    }
}

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
