#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1 , y1 , x2 , y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    int x[3] , y[3];
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < 3; i++)
        if (x[i] < x1 && y[i] > y1 )
            cout << "NW" << "\n";
        else if (x[i]>=x1&&x[i]<=x2&&y[i]>=y1)
            cout << "N" << "\n";
        else if (x[i]>x2&&y[i]>y1)
            cout << "NE" << "\n";
        else if (x[i]>=x2&&y[i]>=y2&&y[i]<=y1)
            cout << "E" << "\n";
        else if (x[i]>x2&&y[i]<y2)
            cout << "SE" << "\n";
        else if (x[i]>=x1&&x[i]<=x2&&y[i]<y2)
            cout << "S" << "\n";
        else if (x[i]<x1&&y[i]<y2)
            cout << "SW" << "\n";
        else if (x[i]<x1&&y[i]>=y2&&y[i]<=y1)
            cout << "W" << "\n";
        else
            cout << "CENTRAL" << "\n";
}
