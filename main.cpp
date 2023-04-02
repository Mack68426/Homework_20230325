#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>

#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "triangle.h"

void shape_program();
void shape_prompt(std::string&);
bool shape_input(std::string);

int main(int argc, char* argv[])
{
    shape_program();
    
    return 0;
}

void shape_program()
{
    std::string which;
    
    do
    {
        shape_prompt(which);

        if (which == "q")  break;

        std::string line;  // each shape input

        if (!shape_input(which))    continue;

      
    } while (!std::cin.fail());
}


void shape_prompt(std::string& which)
{
    std::cout << "Please enter a shape (rectangle, square, circle, triangle): ";
    std::getline(std::cin, which);

    std::transform(which.cbegin(), which.cend(), which.begin(),
        std::tolower);
}

bool shape_input(std::string which)
{
    std::string line;
    bool valid_input = false;

    if (which == "rectangle" || which == "rect")
    {
        valid_input = true;

        float w = 0.f, h = 0.f;

        std::cout << "Please enter width and height, separated by space: ";
        std::getline(std::cin, line);

        std::istringstream iss(std::move(line));

        iss >> w >> h;

        std::cout << rectangle{ w, h } << std::endl;
    }
    else if (which == "square" || which == "sq")
    {
        valid_input = true;

        float side = 0.f;

        std::cout << "Please enter a number: ";
        std::getline(std::cin, line);

        std::istringstream iss(std::move(line));

        iss >> side;

        std::cout << square{ side } << std::endl;
    }
    else if (which == "circle" || which == "cir")
    {
        valid_input = true;

        float r = 0.f;

        std::cout << "Please enter a number: ";
        std::getline(std::cin, line);

        std::istringstream iss(std::move(line));

        iss >> r;

        std::cout << circle{ r } << std::endl;
    }
    else if (which == "triangle" || which == "tri")
    {
        valid_input = true;

        float s1, s2, s3;

        std::cout << "Please enter each side of triangle, separated by space: ";
        std::getline(std::cin, line);

        std::istringstream iss(std::move(line));
        iss >> s1 >> s2 >> s3;

        std::cout << triangle{ s1, s2, s3 } << std::endl;
    }
    else
    {
        std::cout << "You entered some invalid characters." << std::endl;

        std::cin.clear();
    }

    return valid_input;
}