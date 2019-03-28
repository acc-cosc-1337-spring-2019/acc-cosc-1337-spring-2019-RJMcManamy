//main
#include "shape.h"
#include <memory>
#include "line.h"
#include "circle.h"
#include <vector>
#include <iostream>

int main() 
{
	//Shape s_abstract; can't create instance; pure virtual
	//function makes it an abstract class

	Shape* line = new Line(); //creates dynamic memory (heap)
	line->draw();
	delete line;

	std::vector<Shape*> shapes{ new Line(), new Circle() };

	for (auto& shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	for (auto* shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";


	//shape instance using smart pointer
	std::unique_ptr<Shape> l = std::make_unique<Line>();
	l->draw();


	//vectore of Shape instances using smart pointers
	std::vector <std::unique_ptr<Shape>> shaps;
	shaps.push_back(std::make_unique<Line>());
	shaps.push_back(std::make_unique<Circle>());

	return 0;
}