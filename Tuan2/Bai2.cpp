#include <iostream>
#include <math.h>

using namespace std;
int main () {
    double x; int y;
    cin >> x >> y;
    int result =1;
    for (int i=1; i<=y; i++) {
        result*=x;
    }
    cout << result;
}
