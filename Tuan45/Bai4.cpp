#include <iostream>
using namespace std;
int main () {
    //char a[5] = {'a', 'b', 'c', 'd', 'e'};
    //cout << a[-1] << " " << a[5] << " " << a[6] << endl;
    //cin >> a[-1] >> a[5] >> a[6];
    //cout << a[-1] << " " << a[4] << " " << a[6] << endl;
    char c[3][4];
    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++) {
            cin>> c[i][j];
        }
    }
    cout << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
