#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t , j , e , numerator , denominator;
    cin >> t >> j >> e ;
    numerator = ((t>j)?t:j);
    denominator = ((t<j)?t:j);
    int remainder   = numerator % denominator;
    while (remainder != 0)
    {
        remainder   = numerator % denominator;
        numerator   = denominator;
        denominator = remainder;
    }
    gcd = numerator;
    long int lcm = __lcm(t , j);
    cout << (((e/lcm)%2==0)?"JERRY":"TOM");
}
