#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


// (-b ± sqrt(D)) / 2a
void calculateRoots(double a, double b, double c){
   cout << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
   cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
}

int main(){
    double a,b,c;

    cout << "Input the coeficients a,b,c: ";
    cin >> a >> b >> c;

    double D;
    D = b * b - 4 * a * c;

    if (D < 0){
        cout << "No real roots!!";
    } else
        calculateRoots(a,b,c);
    return 0;
}