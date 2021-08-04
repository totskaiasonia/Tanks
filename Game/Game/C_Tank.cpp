#include "C_Tank.h"

C_Tank::C_Tank(int pos_x, int pos_y, std::string& texture_file)
{
	this->_pos_x = pos_x;
	this->_pos_y = pos_y;
	this->_texture.loadFromFile(texture_file);
	this->_sprite = Sprite(this->_texture);
	this->_sprite.setOrigin(20, 22.5);
}

Sprite C_Tank::get_sprite()
{
	return this->_sprite;
}

void C_Tank::move(Event::KeyEvent key)
{
	if (key.code == 97)
	{
		this->_sprite.rotate(270 - this->_sprite.getRotation());
		this->_pos_x--;
	}
	else if (key.code == 119)
	{
		this->_sprite.rotate(360 - this->_sprite.getRotation());
		this->_pos_y--;
	}
	else if (key.code == 100)
	{
		this->_sprite.rotate(90 - this->_sprite.getRotation());
		this->_pos_x++;
	}
	else if (key.code == 115)
	{
		this->_sprite.rotate(180 - this->_sprite.getRotation());
		this->_pos_y++;
	}

	this->_sprite.setPosition(this->_pos_x, this->_pos_y);
}
void C_Tank::shoot()
{

}

C_Tank::~C_Tank()
{

}