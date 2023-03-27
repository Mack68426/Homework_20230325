#include "rectangle.h"


/*-----------------------------*/
/*         rectangle           */
/*-----------------------------*/
rectangle::rectangle(float width, float height)
	:m_width(width), m_height(height)
{

}

float rectangle::width() const
{
	return m_width;
}
float rectangle::height() const
{
	return m_height;
}

float rectangle::area() const
{
	return m_height * m_width;
}

float rectangle::perimeter() const
{
	return 2 * (m_width + m_height);
}

float rectangle::circumference() const
{
	return perimeter();
}

std::ostream& rectangle::shape_info(std::ostream& out) const
{
	return out << "rectangle"
		<< "(w: " << width() << ", "
		<< "h: " << height() << ", "
		<< "area: " << area() << ", "
		<< "perimeter: " << perimeter()
		<< ")";
}

std::string rectangle::shape_details() const
{
	return "rectangle(w: " + std::to_string(width())
		+ ", h: " + std::to_string(height())
		+ ", area: " + std::to_string(area())
		+ ", perimeter: " + std::to_string(perimeter())
		+ ")";
}
