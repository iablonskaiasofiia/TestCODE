#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x,n;
    int z;
    double y;
    
    y = 1;
    cout << "Input n >= 3, n = ";
    cin >> n;
    cout << "Input x = ";
    cin >> x;

    if (x < 0) {
        for (int i = 1; i <= n-2; i++) {
            y=y*(i+x);
        }
    }
    else {
        for (int j=1; j <= n; j++) {
            z = 0;
            for (int i=1; i < n+3; i++) {
                z=z+(i+1/(4*j*j));    
            }
            y=y*z;
        }
    }
    
    cout << "x= " << x <<"; " << "y= " << y << endl;
    return 0;
}
