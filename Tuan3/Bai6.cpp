#include <iostream>
using namespace std;
struct Rect {
    int x, y;
    double l, w, h;
};
struct Ship {
    Rect ship;
    string id;
    double dx, dy;

    void move () {
        ship.x += dx;
        ship.y += dy;
    }
};
void display (const Ship& myShip) {

    cout << myShip.id << endl << myShip.ship.x << ' ' << myShip.ship.y;
}
int main () {
    Ship myShip;
    cin >> myShip.ship.x >> myShip.ship.y >> myShip.dx >> myShip.dy;
    getline(cin, myShip.id);
    myShip.move();
    display(myShip);
}
