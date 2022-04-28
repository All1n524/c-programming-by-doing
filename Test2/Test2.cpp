#include <iostream>
#include <vector>
using namespace std;

void method1() {
cout<<"1 2 3\n";
cout<<"4 5 6\n";
cout<<"7 8 9\n";

}

void method2() {
    for (int i=1; i<10; i++)
    {
        cout << i << " " ;
        if (i%3 == 0)
        {
            cout <<"\n";
        }
    }
}

void method3() {
    int array[9]= {1,2,3,4,5,6,7,8,9};
    for (int i=0; i<9; i++)
    {
        cout<<array[i]<< " ";
        if ((i==2) && (i==5))
        {
            cout <<"\n";
        }
    }
}

void method4(){ // uses only while loops
  int j =0;
  while(j<3){
    int i = 0;
    while(i<3){
      i++;
      cout<< (j*3)+i << " ";
    }
    cout << endl;
    j++;
  }
}


int main(){
    // method1();
    // cout <<"\n";
    // method2();
    // cout <<"\n";
    method3();
    // cout <<"\n";
    // cout <<"\n";
    // method4();


}