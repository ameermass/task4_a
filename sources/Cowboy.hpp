#pragma once 

#include "Character.hpp"
#include "iostream"
using namespace std;

namespace ariel{


    class Cowboy : public Character{

        private:
        string _name;
        Point _point;

        public:


        Cowboy(string name, Point point);

        void shoot(Character* ninja);
        //void print();


    };
}