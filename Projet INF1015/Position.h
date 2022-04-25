#pragma once
#include <iostream>


namespace Modele {
	class Position {
	public:
		Position();
		Position(int x, int y);
		void operator+(Position autre);
		Position operator%(Position autre);
		int getPosition_x() { return m_x; };
		int getPosition_y() { return m_y; };
		bool operator==(Position autre);
	private:
		int m_x;
		int m_y;
	};
}