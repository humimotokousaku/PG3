#pragma once

class Enemy
{
public:
	///
	/// Default Method
	/// 
	
	//void Init();
	void Update();
	//void Draw();

	///
	///	User Method
	/// 

	// �ߐڍU��
	void Melee();
	// �ˌ�
	void Fire();
	// ���E
	void Leave();

private:
	enum Behavior {
		MELEE,
		FIRE,
		LEAVE
	};

	// �����o�֐��|�C���^�e�[�u��
	static void (Enemy::* pfunc[])();
};

