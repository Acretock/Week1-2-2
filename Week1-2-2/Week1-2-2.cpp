#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, D;
    float x1, x2;
    cin >> a >> b >> c;
    if (a != 0)
    {
        D = (b * b) - (4 * a * c);
        if (D > 0)
            cout << ((-b + sqrt(D)) / (2 * a)) << " " << ((-b - sqrt(D)) / (2 * a));
        else if (D == 0)
            cout << ((-b + sqrt(D)) / (2 * a));
    }
    else if (b != 0)
        cout << -c / b;
}

