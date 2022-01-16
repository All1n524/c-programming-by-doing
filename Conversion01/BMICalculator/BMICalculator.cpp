//Keyboard Input BMICalculator 15 pts Allen Hung
//import lib
#include <iostream>
using namespace std;
int main(){
    float in, ft, p, m, bmi, kg, total;
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
    cout << "Your bmi is: " << bmi << endl;


}