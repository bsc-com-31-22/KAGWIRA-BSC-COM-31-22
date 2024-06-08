#include <iostream>
#include "Rectangle.h"

int main() {
    // Creating an instance using default constructor
    Rectangle rect1;

    // Assigning values via user input
    float length;
    float width;
    
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    rect1.setLength(length);

    std::cout << "Enter width of rectangle: ";
    std::cin >> width;
    rect1.setWidth(width);

    // Calculating and outputting area
    std::cout << "Area of rectangle 1: " << rect1.calculateArea(length, width) << std::endl;
    
    cout<<"\nenter the length and width of Rectangle 2"<<endl;
    std::cin >> length >> width;

    Rectangle rect2(length, width);
        std::cout << "Area of rectangle 2: " << rect2.calculateArea(length, width) << std::endl;
    return 0;
}
