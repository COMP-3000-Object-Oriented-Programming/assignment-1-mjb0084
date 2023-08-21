#include <iostream>
#include <cmath>


using namespace std; 

int main() {

int max;
int occupants;

cout << "Enter the Maximum occupancy for the room.\n";
cin >> max;
cout << max << "\n";
cout << "Enter the number of occupants of the room.\n";
cin >> occupants;
cout << occupants << "\n";

if (occupants > max) {
    return 0;
}

else {
    cout << "The number of occupants does not exceed the legal maximum.\n";
    return 0;
}

return 0; 
}

