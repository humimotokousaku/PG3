#pragma once

template<typename T1, typename T2>

class Comparator
{
private:// �����o�ϐ�
	T1 num1_;
	T2 num2_;

public:// �����o�֐�
	Comparator(T1 num1, T2 num2) : num1_(num1), num2_(num2) {}
	
	template<typename T>
	// �l�̏������ق���Ԃ�
	T Min() {
		if (num1_ < num2_) {
			return static_cast<T>(num1_);
		}
		else if (num1_ > num2_) {
			return static_cast<T>(num2_);
		}
		return 0;
	}

};

