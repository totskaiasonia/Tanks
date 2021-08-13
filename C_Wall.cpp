#include "C_Wall.h"
#include "Tank.h"

void C_Wall::initWindow() {
	/*this->videoMode.height = HEIGHT;
	this->videoMode.width = WIDTH;
	this->window = new sf::RenderWindow(this->videoMode, "Tanks!", sf::Style::Titlebar | sf::Style::Close);*/

	//  –азмещаем стены по бокам игрового окна
	this->leftBorder.setSize(sf::Vector2f(1.f, HEIGHT));
	this->leftBorder.setPosition(sf::Vector2f(0, 0));
	this->leftBorder.setFillColor(sf::Color::White);

	this->rightBorder.setSize(sf::Vector2f(1.f, HEIGHT));
	this->rightBorder.setPosition(sf::Vector2f(WIDTH, 0));
	this->rightBorder.setFillColor(sf::Color::White);

	this->upBorder.setSize(sf::Vector2f(WIDTH, 1));
	this->upBorder.setPosition(sf::Vector2f(0, 0));
	this->upBorder.setFillColor(sf::Color::White);

	this->downBorder.setSize(sf::Vector2f(WIDTH, 1));
	this->downBorder.setPosition(sf::Vector2f(0, HEIGHT));
	this->downBorder.setFillColor(sf::Color::White);
}

void C_Wall::checkCollisions() {
	if (this->tank.checkCollision(this->leftBorder)) {
		this->tank.stopMoving();
	}
	if (this->tank.checkCollision(this->rightBorder)) {
		this->tank.stopMoving();
	}
	if (this->tank.checkCollision(this->upBorder)) {
		this->tank.stopMoving();
	}
	if (this->tank.checkCollision(this->downBorder)) {
		this->tank.stopMoving();
	}
	
}