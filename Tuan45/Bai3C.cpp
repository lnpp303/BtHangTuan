#include <iostream>
#include <string.h>
using namespace std;

bool DoiNgauCheck (int i) {
    string s = to_string (i);
    int count=0;
    int l=s.length();
    for (int i=0; i<l/2; i++) {
        if (s[i]==s[l-i-1]) count++;
    }
    if (count==l/2) return true;
    else return false;
}

int main () {
    int T; cin >> T;
    int count = 0;
    for (int i=0; i<T; i++) {
        int a, b; cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (DoiNgauCheck(i)) count++;
        }
    cout << count << endl;
    }
}
