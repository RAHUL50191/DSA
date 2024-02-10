#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fibonacci(n - 1);
}
int main()
{
    int x = 5;
    // cin >> x;

    cout << "hello world" << fibonacci(x);
    return 0;
}
