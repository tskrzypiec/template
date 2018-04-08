#include <iostream>

using namespace std;


template <class T>
T giveNumber(T a){

return a;

};

int main() {


    int a;


    cout<<"Daj liczbe"<<endl<<endl;

    cin>>a;

    int wynik=giveNumber(a);


    cout<<"\nDałeś "<<wynik<<endl;

    return 0;
}