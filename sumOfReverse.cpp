#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        n /= 10;
        r *= 10;
        r += ld;
    }
    cout << r;
}