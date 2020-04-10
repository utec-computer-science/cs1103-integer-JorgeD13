#include "Integer.h"

Integer::Integer()= default;


Integer::Integer(int _value){
    value=_value;
}


Integer::Integer(const Integer& other) : value(other.value) {}


Integer::~Integer() {}



Integer Integer::operator=(const Integer &other) {
    if(this!=&other){
        if(other.value!=0)this->value=other.value;
    }
    return *this;
}


Integer Integer::operator+(int n){
    Integer aux(n);
    return Integer(this->value + aux.value);
}


Integer::operator int() {
    return static_cast<int>(this->value);
}


std::ostream &operator<<(std::ostream &os, const Integer &p) {
    os << p.value;
    return os;
}


std::istream &operator>>(std::istream& is, Integer& I) {
    is >> I.value;
    return is;
}
