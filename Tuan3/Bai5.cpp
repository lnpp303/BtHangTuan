#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
struct Rect {
    int xR, yR;
    double w, h;
    void nhap () {
        cin >> xR >> yR >> w >>h;
    }
    bool contains(const Point p) const {
        if (xR<=p.x && p.x<=xR+w && yR-h<=p.y && p.y<=yR) return true;
        else return false;
    }

};
int main () {
    Point p;
    cin >> p.x >> p.y;
    Rect rectangle;
    rectangle.nhap();
    if (rectangle.contains (p)) cout << "diem nam ben trong";
    else cout << "diem nam ngoai";
}
