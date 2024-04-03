#include <iostream>
using namespace std;

int main () {
    int n, m; cin >>n >> m;
    int a[]={1,2,3}; char b[]={'a', 'b', 'c'};
    char c, s; cin >> c >> s;
    cout << &n << ' ' << &m <<  endl;
    cout << &a[0] << ' ' << &a[1] << ' ' << &a[2] << endl;
    cout << (void*)&b[0] << ' ' << (void*)&b[1] << ' ' << (void*)&b[2]<< endl;
    cout << (void*)&c << ' ' << (void*)&s;
    //dia chi cua cac bien mang int cach nhau 4 bit
    //dia chi cua cac bien mang cha cach nhau 1 bit
    //dia chi cua bien nam tren, phan tu mang nam duoi
    //dia chi kieu int ow tren, kieu char o duoi
}
