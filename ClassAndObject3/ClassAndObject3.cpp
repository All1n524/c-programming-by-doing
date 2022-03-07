#include <iostream>
using namespace std;

class students {
private:
    string Name;
    int age;
    int gradelevel;
    double GPA; 
    char gender;

public: 
    students (string n, int a, int gl, double G, char gen)
    {
        Name = n;
        age = a;
        gradelevel = gl;
        GPA = G;
        gender = gen;
    }

    void setGrades();
    double 

}