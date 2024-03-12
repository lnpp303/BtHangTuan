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
    void nhap () {
    cin >> ship.x >> ship.y >> dx >> dy;
    getline(cin, id);
    }
};


void display (const Ship& myShip) {

    cout << myShip.id << ": " << myShip.ship.x << ' ' << myShip.ship.y<<endl;
}

int main () {
    Ship myShip1, myShip2;
    myShip1.nhap(); myShip2.nhap();

    while (myShip1.ship.x<20) {
        myShip1.move(); myShip2.move();
        display(myShip1); display(myShip2);
    }

}



















