#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
protected:
	int x;
	int y;
	int z;
public:
	Shape(int _x, int _y, int _z);
	void move(int dx, int dy, int dz);
	void print();
	virtual void scale(int factor) = 0;
	virtual int volume() = 0;
};

#endif