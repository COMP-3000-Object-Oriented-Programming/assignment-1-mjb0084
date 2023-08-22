#include <iostream>
#include <cmath>


using namespace std; 

int main() {

int max;
int occupants;
int diff;

cout << "Enter the Maximum occupancy for the room.\n";
cin >> max;
cout << max << "\n";
cout << "Enter the number of occupants of the room.\n";
cin >> occupants;
cout << occupants << "\n";

if (occupants > max) {
    diff = occupants - max;
    cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES " << diff << " PERSONS TO LEAVE THE ROOM IMMEDIATELY\n";
    return 0;
}

else {
    cout << "The number of occupants does not exceed the legal maximum.\n";
    return 0;
}

return 0; 
}

