#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    if (n>100000)
        cout << 10;
    else if (n>30000)
        cout << 5;
    else if (n>5000)
         cout << 2;
    else
         cout << 0;
}