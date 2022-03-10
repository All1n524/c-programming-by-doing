#include <iostream>
using namespace std;

class Moon {
private: 
    string name; 
    double distance;
    double mass;
    double diameter;

public:

// create a constructor for class Moon

    Moon(string mName, double mDistance, double mMass, double mDiameter){
        name = mName;
        distance = mDistance;
        mass = mMass;
        diameter = mDiameter;
    }

};

//create a class name Planet


class Planet {
private:
    string name;
    double distance;
    double mass;
    double diameter;
    int numMoons;
    Moon TopMoons[3];//top 3 moons of the planet
public: 
// create a constructor for planet
    Planet(){}
    Planet(string pName, double pDistance, double pMass, double pDiameter, int pNumMoons, Moon pTM1, Moon pTM2, Moon pTM3){
        name = pName;
        distance = pDistance;
        mass = pMass;
        diameter = pDiameter;
        numMoons = pNumMoons;
        numMoons[0] = pTM1;
        TopMoons[1] = pTM2;
        TopMoons[2] = pTM3;

    }

    double getDistance() {
        return Distance;
    }
    
    Moon getMoon(int i){
        return TopMoons[i];
    }

    string getName(){
        return Name;
    }

};

//Create a function distanceP(Planet a, Planet b) that takes in two Planets.

double distanceP()