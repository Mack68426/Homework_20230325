#pragma once

#include "shape.h"


class triangle : public shape
{
public:
	triangle() = default;
	triangle(float bottom, float left_side, float right_side);

	float bottom() const;
	float lside() const;
	float rside() const;


	float area() const override;
	float perimeter() const override;
	float circumference() const override;
	std::ostream& shape_info(std::ostream&) const override;

	std::string shape_details() const override;

private:
	float m_bottom;
	float m_lside;
	float m_rside;
};