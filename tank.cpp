#include "Tank.h"

Tank::Tank(int teamId, int shield) : teamId(teamId), shield(shield) {}

Tank::~Tank() {}

void Tank::takeDamage(int damage) {
    hp-=damage;
}


void Tank::shoot() {}

