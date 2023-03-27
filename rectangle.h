#pragma once

#include "shape.h"

// concrete
class rectangle : public shape
{
public:

	rectangle() = default;
	rectangle(float width, float height);

	float width() const;
	float height() const;
	float area() const override;
	float perimeter() const override;
	float circumference() const override;

	std::ostream& shape_info(std::ostream&) const override;

	std::string shape_details() const override;

private:
	float m_width;
	float m_height;
};

