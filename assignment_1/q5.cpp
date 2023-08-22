#include <iostream>
#include <cmath>

using namespace std; 

int main (){
    double n;
    cout << "Input a positive number to get the square root: \n";
    cin >> n;
    double guess = n/2;
    double r;

    for (int i=1; i<5; i++){
        r = n/guess;
        guess = (guess+r)/2;
        //cout << "Guess: " << guess << "\nr: " << r << endl;
    }
    cout.precision(3);
    cout << endl << r;
}