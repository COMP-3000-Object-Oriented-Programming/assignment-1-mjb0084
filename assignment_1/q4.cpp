#include <iostream>
#include <cmath>

using namespace std; 

int main (){
    int time;
    float distance;

    cout << "Enter a time in seconds.\n"; 
    cin >> time;
    
    distance = 16*(pow(time,2));
    cout << "\nAn object in freefall for " << time << " seconds will fall " << distance << " feet.";
    
}