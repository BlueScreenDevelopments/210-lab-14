#include "Color.h"
#include <iostream>

using namespace std;

int main() {
    Color color1(255, 0, 0);  // Red
    Color color2(0, 255, 0);  // Green
    Color color3(0, 0, 255);  // Blue
    Color color4(255, 255, 0);  // Yellow

    cout << "Color 1: ";
    color1.displayColor();
    cout << "Color 2: ";
    color2.displayColor();
    cout << "Color 3: ";
    color3.displayColor();
    cout << "Color 4: ";
    color4.displayColor();

    return 0;
}