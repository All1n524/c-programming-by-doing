//Pointer and Arrays
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float arr[3]={5,6,7};

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl; 
        //ptr + 0 = 0x7ff7bf47c57c
        //ptr + 1 = 0x7ff7bf47c580
        //ptr + 2 = 0x7ff7bf47c584
    }

    cout << "\nDisplaying value using pointers: " << endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< *(ptr + i) << endl;
    }
    //ptr + 0 = 5
    //ptr + 1 = 6
    //ptr + 2 = 7
    return 0;
}