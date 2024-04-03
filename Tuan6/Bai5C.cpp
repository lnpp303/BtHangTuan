#include <iostream>
#include <math.h>
using namespace std;
bool primeCheck (int n) {
    int count =0;
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n);i++) {
        if (n%i==0) count++
    }
    if (count) return 0;
    else return 1;

}

int main () {
    int n; cin >> n;
    for (int i=2; i<=n; i++) {
        if (primeCheck(i)) cout << i << ' ';
    }

}
