#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int count=0;
    int l=s.length();
    for (int i=0; i<l/2; i++) {
        if (s[i]==s[l-i-1]) count++;
    }
    if (count==l/2) cout << "Yes";
    else cout << "No";
}
