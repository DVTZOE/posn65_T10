#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b ;
    cin >> a >> b ;
    cout << ((a>b)?b*40+(a-b)*25:a*40+(b-a)*20);
}