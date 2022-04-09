//Test 1-2, 40 pts
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    char arr[n];
    cout<<"\nArray before sorting: ";
    for (int i=0; i<n; i++)
    {
        arr[i]= rand()%25+'a';
        cout<<arr[i]<<" ";
    }

    for (int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]>arr[j])
            {
                int one = arr[i];
                arr[i] = arr[j];
                arr[j]=one;
            }

        }
    }
    cout <<"\nArray after sorting: ";
    for(int i=0; i<=n; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;

}