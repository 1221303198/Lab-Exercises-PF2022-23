#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "n => ";
    cin >> n;

    int sum = 0;
    int count = 1;

    while (sum <= n)
    {
        sum = sum + count;
        cout << count << ":" << sum << " ";
        count = count + 1;
    }

    return 0;
} 