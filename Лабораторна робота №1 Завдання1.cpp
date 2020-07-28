#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter x" << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    if (x >= 2 && x <= 5 && y >= 2 && y <= 5 ||  x <= -2 && x >= -5 && y <= -2 && y >= -5) {
        if (x * x + y * y <= 25) {
            if (x * x + y * y >= 4) {
                cout << "An area include a point" << endl;
            }
        }
        else {
            cout << "An area DON'T include a point" << endl;
        }
    }
    else {
        cout << "An area DON'T include a point" << endl;
    }
    return 0;
}