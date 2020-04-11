#include <iostream>

class Integer {
private:
    int value;
public:
    Integer(); //ya
    Integer(int _value); //ya
    Integer(const Integer& other); //ya
    ~Integer(); //ya
    Integer operator=(const Integer& other); //ya
    Integer operator+(int n); //ya
    operator int(); //ya
    friend std::ostream& operator <<(std::ostream& os, const Integer&); //ya
    friend std::istream& operator >>(std::istream& is, Integer&); //ya
};
