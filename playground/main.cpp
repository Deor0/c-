#include <iostream>
#include "Rectangle.hpp"
#include "TextBox.hpp"

using namespace std;

int main() {
    Rectangle rectangle{10,20};
    
    int area;
    
    area = rectangle.getArea();
    cout << area << endl;
    
    return 0;
}
