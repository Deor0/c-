
#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    void draw();
    int getArea();
    void setWidth(int width);
    int getWidth();
    
    void setHeight(int height);
    int getHeight();
private:
    int height = 0;
    int width = 0;
};

#endif
