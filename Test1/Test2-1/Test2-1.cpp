//Test 1: Sort 2D Array 2-1
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int c, r;
    cout<<"Type in the column: ";
    cin>>c;
    cout<<endl;
    cout<<"Type in the row: ";
    cin>>r;
    cout<<endl;

    char a[c][r];
    for (int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            int x = rand()%25+'a';
            char ch = (char)x;
            a[i][j] = ch;
            cout<<a[i][j]<< " ";
        }

    cout << "\n";
    }

}


