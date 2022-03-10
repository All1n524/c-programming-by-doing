//Polymorphism 1 Allen Hung

#include <iostream>
using namespace std;

class findArea{
    public:
        findArea(){}

        findArea(int x){
            cout<<x*x<<'\n';
        }
        findArea(int w, int h){
            cout<<h*w<<'\n';
        }
        findArea(int b1, int b2, int h){
            cout<<((b1+b2)*h)/2<<"\n";
        }

};
int main(){
    findArea(a);
    cin >>a;
    findArea(b , c);
    cin >> b >> c;
    findArea(d,e,h);
    cin >> e >> e >> h;
    return 0;

}