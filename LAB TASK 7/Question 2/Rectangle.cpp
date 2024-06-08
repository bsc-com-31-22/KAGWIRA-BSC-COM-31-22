#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f; 
}
Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
}
Rectangle:: ~Rectangle(){

}
void Rectangle::setLength(float l){
    length = l;
}
void Rectangle::setWidth(float w){
     width = w;
}
float Rectangle::getLength() const{
      return length;
}
float Rectangle::getWidth() const{
       return width;
}
float Rectangle::calculateArea(float l, float w) const{
        return l * w;
}