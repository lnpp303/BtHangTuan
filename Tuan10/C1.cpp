#include <iostream>
#include <cstring>
using namespace std;

char* reverse(const char* a) {
    int l=strlen(a);
    char *s=new char [l+1]; strcpy (s, a);

    char *start = s;
    char *end = s;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return s;
}


char* delete_char(const char* a, char c) {
    int l=strlen(a);
    char *s=new char [l+1]; strcpy (s, a);

    char *p =  s;
    while (*s != '\0') {
        if (*s != c) {
            *p++ = *s;
        }
        s++;
    }
    *p = '\0';

    return s;
}


char* pad_right(const char *a, int n) {
    int l=strlen(a);
    char *s= new char [l+1];
    strcpy(s,a);

    while (l < n) {
        s[l] = '_';
        l++;
    }
    s[l] = '\0';

    return s;
}


char* pad_left(const char *a, int n) {
    int l= strlen(a);
    char *s=new char [l+1];
    strcpy(s,a);

    if (l < n) {
        int spaces = n - l;
        for (int i = l - 1; i >= 0; i--) {
            s[i + spaces] = s[i];
        }

        for (int i = 0; i < spaces; i++) {
            s[i] = '_';
        }
        s[n] = '\0';
    }

    return s;
}


char* truncate(const char *a, int n) {
    int l= strlen(a);
    char *s=new char [l+1];
    strcpy(s,a);

    if (l > n) {
        s[n] = '\0';
    }
    return s;
}
char* trim_left(const char* a) {
    int l= strlen(a);
    char *s=new char [l+1];
    strcpy(s,a);

    int spaces = 0;
    for (char *q = s; *q != '\0'; q++) {
        if(*q == '_') spaces++;
        else break;
    }

    int n = l-spaces;
    for(int i=0; i<n; i++){
        s[i] = s[i+spaces];
    }
    s[n] = '\0';

    return s;
}


char* trim_right(const char* a) {
    int l= strlen(a);
    char *s=new char [l+1];
    strcpy(s,a);

    char *end = s + l - 1;
    while (end >= s && *end == '_') {
        end--;
    }
    *(end + 1) = '\0';

    return s;
}

int main () {
    const char* s1="howTheseDay";
    char *a1= reverse (s1); cout << a1<< endl;
    delete [] a1;

    //const char* s2 = "makeItEasy";
    //char *a2= delete_char(a2, 'a'); cout << a2<< endl;
    // delete [] a2; //y nay chay duoc nhung khong ra ket qua

    const char* s3="howTheseDay";
    char *a3= pad_right (s3, 15); cout << a3<<endl;
    delete [] a3;

    const char* s4="howTheseDay";
    char *a4= pad_left (s4, 15); cout << a4<< endl;
    delete [] a4;

    const char* s5="howTheseDay";
    char *a5= truncate(s5, 7); cout << a5<<endl;
    delete [] a5;

    const char* s6="____howTheseDay";
    char *a6= trim_left (s6); cout << a6<<endl;
    delete [] a6;

    const char* s7="howTheseDay______";
    char *a7= trim_right (s7); cout << a7;
    delete [] a7;

}

