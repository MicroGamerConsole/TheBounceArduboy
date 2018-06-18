// Joshimuz 2016

#ifndef _PLAYER_h
#define _PLAYER_h

#include <MicroGamer.h>
#include <MicroGamerTones.h>

#define  DEFAULTGRAVITY    0.15f

class PlayerClass
{
protected:
	float xVelocity;
	float yVelocity;

	bool canJump;

public:
	float x;
	float y;

	float gravity = DEFAULTGRAVITY;

	bool canInteract;
	byte interactTimer;

	//byte collisions;

	bool leftCol;
	bool rightCol;
	bool topCol;
	bool botCol;

	void update(MicroGamer& arduboy, MicroGamerTones& sound);
	void respawn(short spawnX, short spawnY);
	void hitInteractable();
};

extern PlayerClass player;

#endif

