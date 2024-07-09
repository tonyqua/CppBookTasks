#include <iostream>


const double KM_TO_MILES = 0.621371;
const double METERS_TO_FEET = 3.28084;
const double KM_TO_METERS = 1000.0;

int main() {
    double km, m;

    std::cin >> km >> m;
    
    double totalMeters = km * KM_TO_METERS + m;
    double miles = totalMeters / (KM_TO_METERS / KM_TO_MILES);
    double feet = (totalMeters - (static_cast<int>(miles) * (KM_TO_METERS / KM_TO_MILES))) * METERS_TO_FEET;

    std::cout << static_cast<int>(miles) << " " << feet << std::endl;

    return 0;
}
