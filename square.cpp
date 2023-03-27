#include "square.h"


/*-----------------------------*/
/*            square           */
/*-----------------------------*/

square::square(float side)
	:rectangle(side, side)
{
}

float square::side() const
{
	return rectangle::width();
}

std::ostream& square::shape_info(std::ostream& out) const
{
	return out << "square("
		<< "s: " << side() << ", "
		<< "area: " << area() << ", "
		<< "perimeter: " << perimeter()
		<< ")";
}

std::string square::shape_details() const
{
	return "square(s: " + std::to_string(side())
		+ ", area: " + std::to_string(area())
		+ ", perimeter: " + std::to_string(perimeter())
		+ ")";
}
