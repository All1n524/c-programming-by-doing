//If Statements Gender Game 50 pts Allen Hung
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string gender, first_name, last_name, ans;
    int age;
    cout <<"What is your gender (Male or Female) ";
    cin >> gender;
    cout << endl;
    cout <<"First name: ";
    cin >> first_name;
    cout << endl;
    cout <<"Last name: ";
    cin >> last_name;
    cout << endl;
    cout <<"Age: ";
    cin >> age;
    cout << endl;
    cout <<"\n";
    if (gender == "Female")
    {
        if (age>=20)
        {
            cout <<"Are you married, " << first_name << " (yes or no)? " <<endl;
            cin >> ans;
            cout <<"\n";
            if (ans == "yes")
            {
                cout <<"Then I shall call you Mrs. " << last_name <<endl;
            }
            else
            {
                cout <<"Then I shall call you Ms. " << last_name <<endl;
            }
        }
        else if (age<20)
        {
            cout <<"Then I shall call you Ms. " << last_name << "." <<endl;
        }
    }
    else
    {
        if (age>=20)
        {
            cout <<"Then I shall call you Mr. " << last_name << "." <<endl;
        }
        else if (age<20)
        {
            cout <<"Then I shall call you " << first_name << " " << last_name << "." <<endl;
        }
    }
    return 0;

}