#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

class C_Tank
{
public:
	C_Tank(int pos_x, int pos_y, std::string& texture_file);

	Sprite get_sprite();

	void move(Event::KeyEvent);
	void shoot();

	~C_Tank();
private:
	int _pos_x;
	int _pos_y;

	Texture _texture;

	Sprite _sprite;
};