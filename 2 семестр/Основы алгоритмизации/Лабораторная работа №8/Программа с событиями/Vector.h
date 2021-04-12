#pragma once
class Vector
{
public:
	Vector(int);
public:
	~Vector(void);
	void Add();
	void Del();
	void Show();
	int operator() ();
protected:
	Object** beg;
	int size;
	int cur;
	/*void Vector::HandleEvent(const TEvent& e)
	{
		if (e.what == evMessage)
		{
			Object** p = beg;
			for (int i = 0; i < cur; i++)
			{
				(*p)->HandleEvent(e);
				p++;
			}
		}
	}*/
};
