 #include <iostream>
 using namespace std;
 int main () {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    //cout << p << ' ' << *p << ' '<< p2 << ' ' << *p2 << endl;
    delete p;
    //cout << p2 << ' ' << *p2<< endl;
    *p2 = 100;
    //lỗi vi p và p2 cùng trỏ tới một vùng nhớ, ở trên đã giải phóng vùng nhớ này vì vậy p2 đang trỏ tới một vùng vô định
    cout <<p2 << endl<< *p2;
    delete p2;
 }

