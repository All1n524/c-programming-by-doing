//If Statements A Little Quiz 40 pts Allen Hung
//import lib
#include <iostream>
using namespace std;
int main() {
    string choice;
    int a1, a2, a3;
    cout << "Are you ready for a quiz?"; 
    cin >> choice;
    cout << "\n";
    cout << "Okay, here it comes!\n";
    cout << "\n";
    cout << "\n";
    cout << "Q1) What is the capital of Alaska?\n";
    cout << "     1) Melbourne\n";
    cout << "     2) Anchorge\n";
    cout << "     3) Juaneau\n";
    cout << "\n";
    cout << ">";
    cin >> a1;
    if (a1 == 1)
    {
        cout<<"That's right\n";
    }
    else
    {
        cout<<"Tha's wrong\n";

    }

    cout << "\n";
    cout <<"Q2) Can you store the value \"cat\" in a variable of type int?\n";
    cout << "     1) yes\n";
    cout << "     2) no\n";
    cout << "\n";
    cout << ">";
    cin >> a2;
    if (a2 == 1)
    {
        cout<<"Sorry, \"cat\" is a string. ints can only store numbers.\n";
    }
    else
    {
        cout<<"Yes, you're right!\n";
    }

    cout << "\n";
    cout << "Q3) What is the result of 9+6/3?\n";
    cout << "   1) 5\n";
    cout << "   2) 11\n";
    cout << "   3) 15/3\n";
    cout << "\n";
    cout << ">";
    cin >> a3;
     if (a3 == 1)
    {
        cout<<"That's correct!\n";
    }
    else
    {
        cout<<"Sorry, you're wrong\n";
    }







    


}