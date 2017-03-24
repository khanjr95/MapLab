#pragma once
#include <stack>
#include <queue>
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
	void stfn(Location * newLocation);
	std::queue<Location *> visitedLocations;
	
	//Location * Path = nullptr;
	
};// make a queue that goes from start to finish 

	//std::string GetPathBackToHome();