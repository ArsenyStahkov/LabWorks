#pragma once
struct Obj {
	Obj() {}
	~Obj() {}
	// Чисто виртуальная функция
	virtual void Show() = 0;
};
