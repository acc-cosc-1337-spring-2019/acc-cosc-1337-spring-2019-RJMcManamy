#include "rectangle.h"
#include<iostream>
#include <vector>

using std::vector;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	Rectangle rect1(4, 5);
	Rectangle rect2(10, 10);
	Rectangle rect3(100, 10);
	double total_area = 0;

	vector<Rectangle> rectangles = { rect1, rect2, rect3 };
	for (auto rec : rectangles)
	{
		std::cout << rec.get_area() << " ";
		total_area += rec.get_area();
	}
	std::cout << "\n" << total_area;
	return 0;
}