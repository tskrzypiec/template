#include <iostream>

using namespace std;

template <class T>
T giveNumber(T a, T b, T c){

return a-b+c;

};

int main() {


    int a = 4;
    int b = 2;
    int c = 3;

    int wynik=giveNumber(a, b, c);


    cout<<wynik<<endl;


    return 0;
}