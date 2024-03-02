#include <iostream>
#include <math.h>
//bai2
using namespace std;
int main () {
    double x; int y;
    cin >> x >> y;
    for (int i=1; i<=y; i++) {
        x*=x;
    }
    cout << x;
}
