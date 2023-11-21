// lab5_5.cpp
#include <iostream>
#include <iomanip>
using namespace std;

double St(double x, int n, int& depth, int level)
{
    if (level > depth)
        depth = level;
    cout << "level: " << level << endl;
    // cout << "n = " << n << endl;
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1.0 / St(x, abs(n), depth, level + 1);
    }
    else {
        return x * St(x, n - 1, depth, level + 1);
    }
}

int main() {
    int depth = 0;
    double x;
    int n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;
    cout << "St = " << St(x, n, depth, 1) << endl;
    cout << "Depth: " << depth << endl;

    return 0;
}
