#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3] ;
    string abc;
    cin >> a[0] >> a[1] >> a[2] >> abc;
    if (a[0]>100 || a[1]>100 || a[2]>100 || a[0]<0 || a[1]<0 || a[2]<0) return 0;
    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        if (abc[i] == 'A')
            cout << a[0] << " ";
        else if (abc[i] == 'B')
            cout << a[1] << " ";
        else if (abc[i] == 'C')
            cout << a[2] << " ";
    }
}