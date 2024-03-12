#include <iostream>
#include <iomanip>
using namespace std;
 struct Point {
    double x, y;
    void nhap () {
        cin >> x >>y;
    }
    void print () {
        cout <<setprecision(2) << fixed << x << ' '<<y;
    }
 };
Point midPoint (const Point p1, const Point p2) {
      Point pMid;
      pMid.x= (p1.x+p2.x)/2;
      pMid.y=(p1.y+p2.y)/2;
      return pMid;
}
int main () {
    Point p1, p2;
    p1.nhap();
    p2.nhap();
    Point pMid = midPoint (p1, p2);
    pMid.print();
}

