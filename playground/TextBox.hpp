#ifndef TextBox_hpp
#define TextBox_hpp

#include <iostream>

using namespace std;

class TextBox {
public:
    void setValue(const string& value);
    string getValue();
private:
    string value;
};

#endif
