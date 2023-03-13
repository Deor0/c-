
#include "Rectangle.hpp"

#include <iostream>
using namespace std;

void Rectangle::draw() {
    cout << "Drawing" << endl;
}

int Rectangle::getArea() {
    return height * width;
}

// Width
void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("Width");
    this->width = width;
}

int Rectangle::getWidth() {
    return width;
}

// Height
void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

int Rectangle::getHeight() {
    return height;
}


// Constructor

Rectangle::Rectangle(int width, int height) {
    setWidth(width);
    setHeight(height);
    
}
