#include <iostream>
using namespace std;
int main(void)
{
    int n;

    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << ", ";
    }

    return 0;
}