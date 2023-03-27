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

int main(int argc, char* argv[])
{
    // Please enter a shape (rectangle, square, circle, triangle): rectangle
    
    // Please enter width and height, separated by space: 5.1 3.4
    
    // rectangle(w: 5.1, h: 3.4, area: XXXX, perimeter: XXXX)
    do
    {
        std::cout << "Please enter a shape (rectangle, square, circle, triangle): ";
        std::string which; // which shape
        std::string line;  // each shape input
        
        std::getline(std::cin, which);

        std::transform(which.cbegin(), which.cend(), which.begin(),
            std::tolower);


        

        if (which == "rectangle")
        {
            float w = 0.f, h = 0.f;
            
            std::cout << "Please enter width and height, separated by space: ";
            //std::getline(std::cin, str, ' ');

            std::getline(std::cin, line);
            
            std::istringstream iss(line);

            iss >> w >> h;

            std::cout << rectangle{ w, h } << std::endl;
        }
        else if (which == "square")
        {
            float side = 0.f;

            std::cout << "Please enter a number: ";
            std::getline(std::cin, line);

            std::cout << square{ side } << std::endl;
        }
        else if (which == "circle")
        {
            float r = 0.f;

            std::cout << "Please enter a number: ";
            std::getline(std::cin, line);

            std::cout << circle{ r } << std::endl;
        }
        else if (which == "triangle")
        {
            float s1, s2, s3;

            std::cout << "Please enter each side of triangle, separated by space: ";
            std::getline(std::cin, line);

            std::istringstream iss(line);

            iss >> s1 >> s2 >> s3;

            std::cout << triangle{ s1, s2, s3 } << std::endl;
        }
        else
        {
            std::cout << "You did not enter any valid input!" << std::endl;

            break;
        }
    } while (!std::cin.fail());
    


    return 0;
}