#include "Character.hpp"
using namespace std;

namespace ariel {

    Character::Character(string name,const Point& point) : name(name), point(point) {};
    Character::Character(){};


    string Character::print(){
        return "";
    }
}