//Basic And Printing Number And Math 7 pts Allen Hung
//import lib
#include <iostream>
using namespace std;

int main()
{
    //tell the computer to print out the sentence
    cout << "I will now count my chickens: \n";
    //tell the computer to print out the sentence
    cout << "Hens " << ( 25 + 30 / 6 ) << '\n';
    //tell the computer to print out the sentence
    cout << "Roosters " << ( 100 - 25 * 3 % 4 ) << '\n';
    //tell the computer to print out the sentence
    cout << "Now I will count the eggs:" << '\n';
    //tell the computer to print out the sentence
    cout << 3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6 << '\n';
    //tell the computer to print out the sentence
    cout << "Is it true that 3 + 2 < 5 - 7?" << '\n';
    //tell the computer to identify if it's true or not
    cout << boolalpha << (3 + 2 < 5 - 7) << '\n';
    //tell the computer to print out the sentence
    cout << "What is 3 + 2? " << ( 3 + 2 ) << '\n';
    //tell the computer to print out the sentence
    cout << "What is 5 - 7? " << ( 5 - 7 ) << '\n';
    //tell the computer to print out the sentence
    cout << "Oh, that's why it's false." << '\n';
    //tell the computer to print out the sentence
    cout << "How about some more." << '\n';
    //tell the computer to identify if it's true or not
    cout << "Is it greater? " << boolalpha << ( 5 > -2 ) << '\n';
    //tell the computer to identify if it's true or not
    cout << "Is it greater or equal? " << boolalpha << ( 5 >= -2 ) << '\n';
    //tell the computer to identify if it's true or not
    cout << "Is it less or equal? " << boolalpha << ( 5 <= -2 ) << '\n';
    return 0;
}