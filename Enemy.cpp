#include "Enemy.h"
#include <stdio.h>
#include <windows.h>

void Enemy::Update() {
	(this->*pfunc[MELEE])();
	Sleep(1000);

	(this->*pfunc[FIRE])();
	Sleep(1000);

	(this->*pfunc[LEAVE])();
	Sleep(1000);
}

void (Enemy::* Enemy::pfunc[])() = {
	&Enemy::Melee,	// ‹ßÚ
	&Enemy::Fire,	// ËŒ‚
	&Enemy::Leave	// —£’E
};

void Enemy::Melee() {
	printf("‹ßÚ\n");
}

void Enemy::Fire() {
	printf("ËŒ‚\n");
}

void Enemy::Leave() {
	printf("—£’E\n\n");
}
