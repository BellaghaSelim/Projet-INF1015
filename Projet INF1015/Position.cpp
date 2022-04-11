#include "Position.h"
#include <string>

Position::Position() {

}

Position::Position(int x, int y) {
	m_x = x;
	m_y = y;
}

void Position::operator+(Position autre) {
	m_x += autre.m_x;
	m_y += autre.m_y;
}

int Position::operator%(Position autre) {
	return autre.m_x % m_x, autre.m_y % m_y;
	std::cout << "ergier" << std::endl;

}