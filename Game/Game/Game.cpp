#include <iostream>
#include"C_Tank.h"

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 800), "Tanks");
    std::string pic = "C:\\Users\\Home\\source\\repos\\Tanks\\Game\\Game\\tank.png";
    C_Tank player(20, 25, pic);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            else
            {
                player.move(event.key);
            }
        }
        window.clear(Color(250, 220, 100, 0));
        window.draw(player.get_sprite());

        window.display();
    }
}