//Sorting Sorting An Array 100 pts Allen Hung
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout <<"Before: ";
    for (int i=0, i<size; i++)
    {
        cout <<arr[i] << "  ";

    }
    
}


//PRINTING 

#include <iostream>
using namespace std;
int main(){
// int luckyNumbers[6];
int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
//         indexes:    0  1  2   3   4   5
luckyNumbers[0] = 90;
cout << luckyNumbers[0] << endl;
cout << luckyNumbers[1] << endl;
return 0;
}
