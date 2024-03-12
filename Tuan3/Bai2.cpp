#include <iostream>
using namespace std;
 //truyen tham tri struct
 struct Point {
    int x, y;
    void print () {
        cout << x << ' ' << y;
    }
 };
 int main () {
    Point p;
    cin >> p.x >> p.y;
    p.print ();
 }
 //truyen tham tri thanh vien
struct Point {
    int x; int y;

 };
void print (Point p) {
    cout << p.x << ' ' << p.y;
}
int main () {
    Point p;
    cin >> p.x >> p.y;
    print (p);
}
//truyem tham chieu thanh vien
struct Point {
    int x, y;
};
void print (Point& p) {
    cout << p.x << ' ' << p.y;
}
int main () {
    Point p;
    cin >> p.x >> p.y;
    print (p);
}
