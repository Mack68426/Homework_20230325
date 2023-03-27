#include "triangle.h"


/*-----------------------------*/
/*          triangle           */
/*-----------------------------*/

triangle::triangle(float bottom, float left_side, float right_side)
	:m_bottom(bottom), m_lside(left_side), m_rside(right_side)
{

}

float triangle::bottom() const
{
	return m_bottom;
}
float triangle::lside() const
{
	return m_lside;
}
float triangle::rside() const
{
	return m_rside;
}

float triangle::area() const
{
	float s = perimeter() / 2;
	return std::sqrt(s * (s - m_bottom) * (s - m_lside) * (s - m_rside));
}

float triangle::perimeter() const
{
	return m_bottom + m_lside + m_rside;
}

float triangle::circumference() const
{
	return perimeter();
}

std::ostream& triangle::shape_info(std::ostream& out) const
{
	return out << "triangle("
		<< "b: " << bottom() << ", "
		<< "l: " << lside() << ", "
		<< "r: " << rside() << ", "
		<< "area: " << area() << ", "
		<< "perimeter: " << perimeter()
		<< ")";
}
std::string triangle::shape_details() const
{
	return "triangle(b: " + std::to_string(bottom())
		+ ", l: " + std::to_string(lside())
		+ ", r: " + std::to_string(rside())
		+ ", area: " + std::to_string(area())
		+ ", perimeter: " + std::to_string(perimeter())
		+ ")";
}
