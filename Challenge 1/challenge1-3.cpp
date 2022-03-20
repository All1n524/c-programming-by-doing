#include <iostream>
using namespace std;

//run
int main(){
    int a = 0;
    int b = 0;
    int sum=0;
    int sum2=0;
    int total=0;

    cout << "Input A: ";
    cin >> a;
    cout << endl << "Input B: ";
    cin >> b;

for (int i = a; i < 100; i++) {

        if (i%a==0)
        {
        sum += i;
        }
    }

for (int x = b; x < 100; x++)
{
    if (x%b==0)
    {
         sum2 += x;
    }
}

    total = sum + sum2;

    cout << "Sum of multiples of "  << a << " and " << b << " is equal to " << total;
    return 0;
}