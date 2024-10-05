#ifndef COLOR_H
#define COLOR_H

class Color {
private:
    int redValue;
    int greenValue;
    int blueValue;

    //TEST TEST TEST
public:
    // Constructor
    Color(int r = 0, int g = 0, int b = 0);

    // Set member functions
    void setRedValue(int r);
    void setGreenValue(int g);
    void setBlueValue(int b);

    // Get member functions
    int getRedValue() const;
    int getGreenValue() const;
    int getBlueValue() const;

    // Print method
    void displayColor() const;
};

#endif  // COLOR_H