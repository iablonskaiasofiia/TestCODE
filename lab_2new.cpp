#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    double a, b, step;
    int x,n;
    double z, y;
    
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input step: ";
    cin >> step;
    cout << "Input n >= 3, n = ";
    cin >> n;

    for (x = a; x <= b; x += step){
        y = 1;
        if (x < 0) {
            for (int i = 1; i <= n-2; i++) {
                y *= i + x;
            }
        } else {
            for (int j = 1; j <= n; j++) {
                z = 0;
                for (int i = 1; i < n+3; i++) {
                    z += i + 1.0/(4*j*j);   
                }
                y *= z;
            }
        }
        cout << "x= " << x <<"; " << "y= " << y << endl;
    }
    return 0;
}