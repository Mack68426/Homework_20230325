#include "circle.h"

/*-----------------------------*/
/*           circle            */
/*-----------------------------*/

circle::circle(float radius)
	:m_radius(radius)
{

}

float circle::radius() const
{
	return m_radius;
}

float circle::area() const
{
	return m_radius * m_radius * m_PI;
}

float circle::perimeter() const
{
	return circumference();
}


float circle::circumference() const
{
	return m_radius * m_PI * 2;
}

std::ostream& circle::shape_info(std::ostream& out) const
{
	return out << "circle("
		<< "r: " << radius() << ", "
		<< "area: " << area() << ", "
		<< "circumference: " << circumference()
		<< ")";
}

std::string circle::shape_details() const
{
	return "circle(r: " + std::to_string(radius())
		+ ", area: " + std::to_string(area())
		+ ", circumference: " + std::to_string(circumference())
		+ ")";
}
