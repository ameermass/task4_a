#pragma once 
#include <iostream>
#include <cmath>


namespace ariel{


    class Point{

        private:

        double _x;
        double _y;

        
        public:

        Point();
        Point(double x, double y);

        double distance(Point point){
            double subX = point._x - _x;
            double subY = point._y - _y;

            double sum =  (subX * subX) + (subY * subY);

            return sqrt(sum);
        }



    };
}