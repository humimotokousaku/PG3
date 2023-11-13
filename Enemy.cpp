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
	&Enemy::Melee,	// 近接
	&Enemy::Fire,	// 射撃
	&Enemy::Leave	// 離脱
};

void Enemy::Melee() {
	printf("近接\n");
}

void Enemy::Fire() {
	printf("射撃\n");
}

void Enemy::Leave() {
	printf("離脱\n\n");
}
