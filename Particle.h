#pragma once
#include "Timer.h"
#include "Windows.h"
class Particle
{
private:
	double x;
	double y;
	double vx;
	double vy;
	double ax;
	double ay;
	double omega;
	double phi;
	double radius;
	int mx;
	int my;
	Timer timer;
	double lastupdate;
	double life;
	COLORREF color;
	HDC hdc;
public:
	Particle(void);
	~Particle(void);
	void init(void);
	void clean(void);
	void update(void);
	void draw(void);
	void setCursorPos(int mx, int my);
	void setHDC(HDC hdc);
	double rand(void);
};

