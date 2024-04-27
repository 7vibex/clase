#include "GameServer.h"

GameServer::GameServer(int num_of_players,int max_players):num_of_players(num_of_players),max_players(max_players)
{
	/*this->num_of_players = num_of_players;
	this->max_players = max_players;*/
}

GameServer::~GameServer()
{
}

void GameServer::printServerInfo()
{
	std::cout << "Number of players on the current server are: " << num_of_players << std::endl;
	std::cout << "Max number of players on this server is  " << max_players << std::endl;
}
