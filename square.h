#pragma once

#include "rectangle.h"

class square : public rectangle
{
public:
	square(float side);

	float side() const;
	std::ostream& shape_info(std::ostream&) const override;

	std::string shape_details() const override;
};

