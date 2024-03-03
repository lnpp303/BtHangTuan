#include <iostream>
using namespace std;
int main () {
    int x, y, z;
    cin >> x >> y >> z;
    if (x<=0 || y <=0 || z<=0) cout << "khong phai 3 canh tam giac";
    else if (x==y || x==z || y==z) {
        cout << x+y+z << endl;
        cout << "tam giac can";
    }
    else if (x==y==z) cout << x+y+z << endl <<"tam giac deu";
    else if ((x*x+y*y==z*z) || (x*x+z*z==y*y)|| (y*y+z*z==x*x)) {
        cout << x+y+z << endl<< "tam giac vuong";

    }
    else cout << x+y+z << endl << "tam giac thuong";

}
