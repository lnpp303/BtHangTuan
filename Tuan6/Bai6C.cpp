#include <iostream>
using namespace std;

int ucln (int a, int b) {
    if (a<b) swap (a, b);
    if (b==0) return a;
    return ucln (b, a%b);
}
int main () {
    int a, b; cin >> a >> b;

    if (ucln (a, b)==1) cout << "2 so nguyen to cung nhau";
    else cout << "2 so khong nguyen to cung nhau";
}
