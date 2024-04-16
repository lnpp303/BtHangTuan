#include <iostream>
using namespace std;

struct Point {
    int x, y;
};
int main () {
    Point p;
    cin >> p.x >> p.y;
    cout << &p.x << ' ' << &p.y << ' ' << &p;
}
//Nhan xet:
//- Dia chi cua p chinh la cua p.x
//- Dia chi cua p.y cach dia chi cua p.x 4 byte
