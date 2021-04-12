#pragma once
class Obj
{
public:
	Obj(void);
public:
	~Obj(void);
	// Виртуальная функция
	virtual void Show() = 0;
};
