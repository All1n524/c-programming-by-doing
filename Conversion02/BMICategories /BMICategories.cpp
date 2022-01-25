//If Statements A Little Quiz 40 pts Allen Hung
//import lib
#include <iostream>
using namespace std;
int main() {
 float in, ft, p, m, bmi, kg, total, category;
    cout << "Your height (feet only): ";
    cin >> ft;
    cout << "Your height (inches only): ";
    cin >> in;
    cout << "\n";
    cout << "Your weight in pounds: ";
    cin >> p;
    cout << "\n";
    total = ft*12+in;
    m = total/39.3701;
    kg = (p*0.453592);
    bmi = (kg/(m*m));
    if (category >= 40.0)
    {
        cout << "very severely (or \"morbidly\") obese";
    }  else if ( 35.0 <= category >= 39.9)
    {
        cout << "severely obese"; 
    }
    cout << "Your bmi is: " << bmi << '\n';

    if (bmi<15.0)
    {
        cout<<"BMI Category: very severely underweight" <<endl;
    }
    else if (bmi>=15.0 && bmi<=16.0)
    {
        cout <<"BMI Category: severely underweight" <<endl;
    }
    else if (bmi>=16.1 && bmi<=18.4)
    {
        cout <<"BMI Category: underweight" <<endl;
    }
    else if (bmi>=18.5 && bmi<=24.9)
    {
        cout <<"BMI Category: normal weight" <<endl;
    }
    else if (bmi>=25.0 && bmi<=29.9)
    {
        cout <<"BMI Category: overweight" <<endl;
    }
    else if (bmi>=30.0 && bmi<=34.9)
    {
        cout <<"BMI Category: moderately obese" <<endl;
    }
    else if (bmi>=35.0 && bmi<=39.9)
    {
        cout <<"BMI Category: severely obese" <<endl;
    }
    else
    {
        cout <<"BMI Category: very severely obese" <<endl;
    }
    return 0;

}