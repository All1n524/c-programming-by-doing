//Create a class called Dog.
//there are two private variables, int Age and double Weight.
//Create a constructor Dog(int a, double w)
//In main initialize a Dog called pet
//print out the pet's age and weight.

#include <iostream>
#include <list>
using namespace std;

class Dog
{
    private:
        double Weight;
        int Age;
    
    public:
     Dog(int a, double w){
         Age = a;
        Weight = w;
     }

     int getAge(){
         return Age;
     }
     double getWeight(){
         return Weight;
     }
    
};

int main()
{
    Dog pet(2,10.4); 
    cout<<pet.getWeight()<<endl;
    cout<<pet.getAge()<<endl;

    return 0;
}