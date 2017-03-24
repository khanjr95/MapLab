#pragma once
#include <stack>
#include "Location.h"
#include <unordered_map>

class Map
{
private:
	std::unordered_map<std::string, Location *> _mapLookup;

public:
	Map(std::string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	void Move(Location *newLocation);
	std::stack<Location *> locationsVisited;
	Location * LookupLocationOnMap(int x, int y);
	
	//Location * Path = nullptr;
	
};// make a queue that say start to finish 

	//std::string GetPathBackToHome();