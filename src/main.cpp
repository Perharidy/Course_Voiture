#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1300, 700), "SFML works!");
    window.setVerticalSyncEnabled(true);
    //window.setFramerateLimit(60);
    window.setPosition(sf::Vector2i(0, 0));

    Texture texture;
    Sprite sprite;
    Image image;
        image.loadFromFile("img/chat.jpg" );
    if(!texture.loadFromImage(image))
    {
        cout<<"Erreur durant le chargement de l'image"<<endl;
        return EXIT_FAILURE; // On ferme le programme
    }
    else
    {
        sprite.setTexture(texture);
        sprite.setColor(Color(0, 255, 0));
        sprite.setPosition(0,350);
        sprite.setOrigin(125,125);
    }   
    int x = 0;
    int angle = 0;

        sprite.setRotation(angle);
    // on fait tourner le programme jusqu'à ce que la fenêtre soit fermée
    while (window.isOpen())
    {

        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        Event event;
        while (window.pollEvent(event))
        {
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
            if (event.type == Event::Closed)
            {
                window.close();
            }
            /*if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Up))
            {
                double angleRadian;
                if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Left))
                {
                    angleRadian = (angle*PI) / 180;
                    sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));
                    sprite.rotate(-5.0);
                    angle = angle-5;
                }else if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Right))
                {
                    angleRadian = (angle*PI) / 180;
                    sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));
                    sprite.rotate(5.0);
                    angle=angle+5;
                }else if(!Keyboard::isKeyPressed(Keyboard::Right) && !Keyboard::isKeyPressed(Keyboard::Left))
                {
                    angleRadian = (angle*PI) / 180;
                    sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));
                } 
            }*/

            
            if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Up) && (event.key.code == Keyboard::Left))
            {
                //sprite.move(-1, 0);
                sprite.rotate(-5.0);
                angle = angle-5;
                double angleRadian = (angle*PI) / 180;
                sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));
            }
            if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Up) && (event.key.code == Keyboard::Right))
            {
                //sprite.move(1, 0);
                sprite.rotate(5.0);
                angle=angle+5;
                double angleRadian = (angle*PI) / 180;
                sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));

            }
            if(Keyboard::isKeyPressed(Keyboard::Down))
            {
                sprite.move(0, 8);
            }
            if((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Up))
            {
                double angleRadian = (angle*PI) / 180;
                sprite.move(8 * sin(angleRadian), -8 * cos(angleRadian));
            }
        }

        //sprite.move(0, 8);
        //sprite.move(8, 0);
        x=x+1;
        if(sprite.getPosition().x>1300)
        {
            sprite.setPosition(0-sprite.getLocalBounds().width,350);
        }
        // Remplissage de l'écran (couleur noire par défaut)
        window.clear();
        window.draw(sprite);
        // Affichage de la fenêtre à l'écran
        window.display();
    }
    return 0;
}