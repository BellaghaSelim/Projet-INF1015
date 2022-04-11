#pragma once
#include <iostream>

class Position {
public:
	Position();
	Position(int x, int y);
	void operator+(Position autre);
	int operator%(Position autre);
	int getPosition_x() { return m_x; };
	int getPosition_y() { return m_y; };
private:
	int m_x;
	int m_y;
};