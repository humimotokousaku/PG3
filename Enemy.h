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

	// 近接攻撃
	void Melee();
	// 射撃
	void Fire();
	// 離脱
	void Leave();

private:
	enum Behavior {
		MELEE,
		FIRE,
		LEAVE
	};

	// メンバ関数ポインタテーブル
	static void (Enemy::* pfunc[])();
};

