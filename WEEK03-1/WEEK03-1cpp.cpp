#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a > b && a > c) || (a > b && a == c) || (a > c && a == b) || (a == b && a == c))
    {
        cout << a;
    }
    else if ((b > a && b > c) || (b > a && b == c) || (b > c && b == a) || (b == a && b == c))
    {
        cout << b;
    }
    else if ((c > a && c > b) || (c > a && c == b) || (c > b && c == a) || (c == a && c == b))
    {
        cout << c;
    }
    return 0;
}
