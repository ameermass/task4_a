#include "doctest.h"
#include <iostream>	
#include <stdexcept>
#include <cassert>
#include "sources/Team.hpp"
using namespace ariel;


TEST_CASE("OldNiNja"){

OldNinja *ninja = new OldNinja("ameer", Point(2,2));

CHECK(ninja->getName() == "ameer");
CHECK(ninja->isAlive());
CHECK(ninja->getSpeed() == 8);
CHECK(ninja->getHealth() == 150);

}

TEST_CASE("TrainedNiNja"){

TrainedNinja *ninja = new TrainedNinja("ameer", Point(5,5));

CHECK(ninja->getName() == "ameer");
CHECK(ninja->isAlive());
CHECK(ninja->getSpeed() == 12);
CHECK(ninja->getHealth() == 120);

}


TEST_CASE("YoungNinja"){

YoungNinja *ninja = new YoungNinja("ameer", Point(7,7));

CHECK(ninja->getName() == "ameer");
CHECK(ninja->isAlive());
CHECK(ninja->getSpeed() == 14);
CHECK(ninja->getHealth() == 100);

}



TEST_CASE("Team"){

TrainedNinja *ninja1 = new TrainedNinja("ameer1", Point(5,5));
OldNinja *ninja2 = new OldNinja("ameer2", Point(2,2));
YoungNinja *ninja3 = new YoungNinja("ameer3", Point(7,7));
Cowboy *cowboy = new Cowboy("ameer", Point(7,7));

Team team(ninja1);

CHECK_NOTHROW(team.add(ninja1));
CHECK_NOTHROW(team.add(ninja2));
CHECK_NOTHROW(team.add(ninja3));
CHECK_NOTHROW(team.add(cowboy));
CHECK_THROWS(team.add(new YoungNinja("ameer3", Point(7,-5))));
CHECK_THROWS(team.add(new YoungNinja("ameer3", Point(0,-5))));
CHECK_THROWS(team.add(new YoungNinja("ameer3", Point(0,0))));
CHECK_THROWS(team.add(new YoungNinja("ameer3", Point(702,-18))));


}