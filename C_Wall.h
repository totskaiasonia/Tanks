#pragma once
//#include "S_Coordinates.h"
#include <SFML/Graphics.hpp>

class C_Wall {
private:
	
	/*sf::RenderWindow* window;
	sf::VideoMode videoMode;*/

	sf::RectangleShape leftBorder;
	sf::RectangleShape rightBorder;
	sf::RectangleShape upBorder;
	sf::RectangleShape downBorder;

	void initWindow();
	void checkCollisions();

	
public:

	const static int HEIGHT = 600; //”казываем размеры окна. 
	const static int WIDTH = 800;
};