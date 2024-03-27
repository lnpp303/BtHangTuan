#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
    //freopen("mang.txt", "r", stdin);
    int a[30];
    srand(time(NULL));
    for (int i=0; i<5; i++) {
       a[i] = rand() % 100;
    }

    for (int i=1; i<5; i++) {
        if (a[i-1]>a[i]) swap (a[i-1], a[i]);
    }
    for (int i=0; i<5; i++) {
        cout << a[i] << ' ';
    }
}
