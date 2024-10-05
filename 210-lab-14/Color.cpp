#include "Color.h"
#include <iostream>

using namespace std;

Color::Color(int r, int g, int b) : redValue(r), greenValue(g), blueValue(b) {}

void Color::setRedValue(int r) {
    redValue = r;
}

void Color::setGreenValue(int g) {
    greenValue = g;
}

void Color::setBlueValue(int b) {
    blueValue = b;
}

int Color::getRedValue() const {
    return redValue;
}

int Color::getGreenValue() const {
    return greenValue;
}

int Color::getBlueValue() const {
    return blueValue;
}

void Color::displayColor() const {
    cout << "Red: " << redValue << ", Green: " << greenValue << ", Blue: " << blueValue << endl;
}