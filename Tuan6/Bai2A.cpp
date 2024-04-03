3#include <iostream>
using namespace std;

int factorial (int n) {
    cout << "x= " << n << " at " << &n << endl;
    if (n==0 || n==1) return 1;
    return n*factorial(n-1);

}
int main () {
    int n; cin >> n;
    cout << factorial(n);
}
// chuoi gia tri cach nhau 40 bit
// suy ra kich thuoc cua stack frame = so lan de quy (5 lan) * kich thuoc 1 stack frame (8bit)
