#pragma once 
#include <iostream>
#include <cmath>

#include "Point.hpp"
using namespace std;


namespace ariel{


    class Character{

        private:
        string name;
        Point point;


        public:
        Character(string name,const Point& point);
        Character();
        string print();

    };
}