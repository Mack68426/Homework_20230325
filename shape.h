#pragma once

#include <string>
#include <iostream>


enum class shape_type
{
	rectangle,
	square,
	circle,
	triangle
};

class shape
{
public:
	/*   copy constructor:   */
	/* shape(cosnt shape&);  */

	// undefined behavior UB
	// virtual destructor
	virtual ~shape() = default;

	// abstruct
	virtual float area() const = 0; // pure virtual method
	virtual float perimeter() const = 0;
	virtual float circumference() const = 0;
	virtual std::ostream& shape_info(std::ostream&) const = 0;
	virtual std::string shape_details() const = 0;
};



std::ostream& operator<<(std::ostream& os, const shape& sp);
std::istream& operator>>(std::istream&, shape&);

/*
std::ostream& operator<<(std::ostream& os, const rectangle& rect);
std::ostream& operator<<(std::ostream& os, const square& sq);
std::ostream& operator<<(std::ostream& os, const circle& cir);
std::ostream& operator<<(std::ostream& os, const triangle& tri);
*/