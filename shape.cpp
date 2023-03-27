#include "shape.h"
#include <cmath>

std::ostream& operator<<(std::ostream& os, const shape& sp)
{
	return sp.shape_info(os);
	// return os << sp.shape_details();
}


/*
std::ostream& operator<<(std::ostream& os, const rectangle& rect)
{
	return os << rect.shape_details();

}
std::ostream& operator<<(std::ostream& os, const square& sq)
{
	return os << sq.shape_details();
}
std::ostream& operator<<(std::ostream& os, const circle& cir)
{
	return os << cir.shape_details();
}
std::ostream& operator<<(std::ostream& os, const triangle& tri)
{
	return os << tri.shape_details();
}
*/