#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int doF; cin >> doF;
    double doC, doK;
    doC = (double)(doF-32)*5/9;
    doK = (double) doC+273.15;
    cout << setprecision (2) << fixed << doC << ' ' << doK;
}
