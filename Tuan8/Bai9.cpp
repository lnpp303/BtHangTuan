#include <iostream>
using namespace std;

struct Point {
    int x, y;
};
Point passByValue (Point p) {
    p.x=5; p.y=10;
    return p;
}
Point passByReference (Point& p) {
    p.x=5; p.y=10;
    return p;
}
void print (Point p) {

    cout << "(" << p.x << ", " << p.y <<")";
}
int main () {
    Point p;
    p.x=1; p.y=1;
    print(p); cout << endl;
    passByValue(p); cout << "pass by value: ";
    print(p); cout<< endl;
    passByReference(p); cout << "pass by reference";
    print(p);
}
