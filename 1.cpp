#include <iostream>

using namespace std;

int fib(int n) {
    if (n < 1) {
        return 0;
    }
     else if (n == 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){
    int n;
    cout << "n= ";
    cin >> n;

    int t = fib(n);
    cout << "fib(" << n << ") = " << t << endl;

    return 0;
}