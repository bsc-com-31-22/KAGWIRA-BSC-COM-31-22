#pragma once
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor

    ~Rectangle(); // Destructor

    // Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // Member function to calculate area
    float calculateArea(float l, float w) const;
};


