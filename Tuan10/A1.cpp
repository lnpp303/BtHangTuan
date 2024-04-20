#include <iostream>
#include <cstring>
using namespace std;

char* concat (const char* s1, const char* s2) {
    int l1=strlen (s1);
    int l2=strlen (s2);
    char *s = new char [l1+l2+1];
    strcpy(s, s1);
    strcat(s, s2);
    return s;
}

int main () {
    const char *s1 = "How ";
    const char *s2 = "about you";
    char *s=concat(s1, s2);
    cout << s;
    delete [] s;
}
