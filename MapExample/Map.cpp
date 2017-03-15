#include "Map.h"



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
	locationsVisited.push(CurrentLocation);
}


Map::~Map()
{
}

void Map::Move(Location *newLocation)
{
	CurrentLocation = newLocation;
}

//std::string Map::GetPathBackToHome()
//{
//	return "TODO: Implement this";
//}
