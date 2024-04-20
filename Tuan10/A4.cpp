#include <iostream>
using namespace std;

int main () {
    int *a=new int [5];
    delete [] a;
    //con trỏ vẫn trỏ tới ô nhớ đầu của mảng
}
