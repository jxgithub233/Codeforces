#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, number;
    cin >> n >> m >> a;
    number = ((n + a - 1)) / a * ((m + a - 1) );
    cout << number << endl;
    return 0;
}