#pragma once

template<typename T1, typename T2>

class Comparator
{
public:// ƒƒ“ƒo•Ï”
	T1 num1_;
	T2 num2_;

public:// ƒƒ“ƒoŠÖ”
	Comparator(T1 num1, T2 num2) : num1_(num1), num2_(num2) {}
	
	template<typename T>
	// ’l‚Ì¬‚³‚¢‚Ù‚¤‚ğ•Ô‚·
	T Min() {
		if (num1_ < num2_) {
			return static_cast<T>(num1);
		}
		else if (num1_ > num2_) {
			return static_cast<T>(num2_);
		}
	}

};

