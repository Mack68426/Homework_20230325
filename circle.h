#pragma once

#include "shape.h"


class circle : public shape
{
public:
	circle() = default;
	circle(float radius);

	float radius() const;
	float area() const override;
	float perimeter() const override;
	float circumference() const override;
	std::ostream& shape_info(std::ostream&) const override;

	std::string shape_details() const override;

private:
	const float m_PI = 3.1415926F;
	float m_radius;
};