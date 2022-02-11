#include <iostream>
using namespace std;
 

int ans(int n, int a, int b)
{
    int sum = 0;
    for (int i = 0; i < n; i++)

        if (i % a == 0 || i % b == 0)
            sum += i;
 
    return sum;
}

int main()
{
    int n, a, b;
    cout << "N: ";
    cin >> n ;
    cout << "Number A: ";
    cin >> a;
    cout << "Number B: ";
    cin >> b;
    cout << ans(n, a, b);
    return 0;
}