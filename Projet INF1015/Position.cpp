#include "Position.h"
#include <string>

Position::Position() {
	m_x = 0; m_y = 0;
}

Position::Position(int x, int y) {
	m_x = x;
	m_y = y;
}

void Position::operator+(Position autre) {
	m_x += autre.m_x;
	m_y += autre.m_y;
}

Position Position::operator%(Position autre) {

	if (m_x != 0 && m_y != 0) {
		return Position(autre.m_x % m_x, autre.m_y % m_y);
	}
	else if (m_y == 0 && m_x != 0) { // Pour eviter division par 0 de m_y
		return Position(autre.m_x % m_x, autre.getPosition_y());
	}
	else if (m_x == 0 && m_y != 0) { // Pour eviter division par 0 de m_x
		return Position(autre.getPosition_x(), autre.m_y % m_y);
	}
	else {
		return Position(-1, -1); // si x = 0 et y = 0
	}
}

bool Position::operator==(Position autre) {

	if (m_x == autre.m_x && m_y == autre.m_y) {
		return true;
	}
	else {
		return false;
	}
}