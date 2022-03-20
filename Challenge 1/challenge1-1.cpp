#include<iostream>
using namespace std;

int main() {

int a=0;
int b=0;
int c;
    for (int i = 3; i < 10; i++) {
        cout << i << " ";
        a = a + i;
        i++;
        i++;

    }

    for (int i = 5; i < 10; i++) {
        cout << i << " " << endl;
        b=i;
        i++;
        i++;
        i++;
        i++;
    }
    c= a+b;
    cout << c << " ";
    return 0;


} 