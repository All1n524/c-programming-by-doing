//Sorting SelectionSort 130pts Allen Hung

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int arr[10];
    int random=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout <<"Array before sorting: ";
    for (int i=0; i<size; i++)
    {
        random = rand()%100+1;
        arr[i] = random;
        cout << arr[i]<<" ";
    }

    cout << endl;
    sort(arr, arr + size, greater<int>());
    reverse(arr, arr + size);
    cout <<"Array after sorting: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";}
 
    
}