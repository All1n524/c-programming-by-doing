//Array CopyingArray 55pts Allen Hung
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main(){

    srand (time(NULL));
    cout<<"Array 1: ";
    int array [10];
    for(int i=0; i<10; i++){
        array[i]=rand() % 100 + 1;
        array[9]=-7;
        cout<<array[i]<< " ";

    }

    cout<<endl;
    cout<<"Array 2: ";

    int arraytwo [10];
    for(int i=0; i<10; i++){
        arraytwo[i]=array[i];
        arraytwo[9]=rand() % 100 + 1;
        cout<<arraytwo[i]<< " ";

    }

}