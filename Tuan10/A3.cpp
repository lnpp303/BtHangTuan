#include <iostream>
using namespace std;
int main () {
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;
//lệnh cerr thứ 3, vì theo đứng nguyên tắc, delete chỉ thực hiện với mảng được cấp phát động,
// mà c không phải mảng đươc cấp phát động nên tùy lần chạy mà nó có bị delete hay không
}
