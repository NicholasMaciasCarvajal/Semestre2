#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>

int main() {

#pragma region Objetos

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "AWA");
    sf::Vector2f speed(0.01f, 0.01f);

    sf::CircleShape bola(10);
    bola.setPosition(500.f, 500.f);

    sf::RectangleShape jugador1(sf::Vector2f(5, 100));
    jugador1.setPosition(10, 500);

    sf::RectangleShape jugador2(sf::Vector2f(5, 100));
    jugador2.setPosition(990, 500);

    sf::RectangleShape Divisor(sf::Vector2f(2,1000));
    Divisor.setPosition(500, 0);

    int score1 = 0;
    int score2 = 0;

#pragma endregion

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Error loading font" << std::endl;
        return -1;
    }

#pragma region CreacionPuntuaciones

    sf::Text PuntuacionJ1;
    PuntuacionJ1.setFont(font);
    PuntuacionJ1.setCharacterSize(24);
    PuntuacionJ1.setFillColor(sf::Color::White);
    PuntuacionJ1.setPosition(10, 10);

    sf::Text PuntuacionJ2;
    PuntuacionJ2.setFont(font);
    PuntuacionJ2.setCharacterSize(24);
    PuntuacionJ2.setFillColor(sf::Color::White);
    PuntuacionJ2.setPosition(900, 10);

#pragma endregion CreacionPuntuaciones

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

#pragma region MovimientoJugadores

        sf::Vector2f positionj1 = jugador1.getPosition();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if (positionj1.y > 0) {
                jugador1.move(0.f, -0.1f);
            }
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if (positionj1.y + jugador1.getSize().y < window.getSize().y) {
                jugador1.move(0.f, 0.1f);
            }
        }

        sf::Vector2f positionj2 = jugador2.getPosition();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            if (positionj2.y > 0) {
                jugador2.move(0.f, -0.1f);
            }
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            if (positionj2.y + jugador2.getSize().y < window.getSize().y) {
                jugador2.move(0.f, 0.1f);
            }
        }

#pragma endregion MovimientoJugadores

#pragma region MovimientoBola

        sf::Vector2f position = bola.getPosition();
        sf::Vector2u windowSize = window.getSize();

        if (position.x < 0) {
            score2++;
            bola.setPosition(500.f, 500.f);
        } else if (position.x + bola.getGlobalBounds().width > windowSize.x) {
            score1++;
            bola.setPosition(500.f, 500.f);
        }

        if (position.y < 0 || position.y + bola.getGlobalBounds().height > windowSize.y) {
            speed.y = -speed.y;
        }

#pragma endregion MovimientoBola

#pragma region ColisionJugador

        if (bola.getGlobalBounds().intersects(jugador1.getGlobalBounds())) {
            speed.x = -speed.x;
            bola.setPosition(jugador1.getPosition().x + jugador1.getSize().x, position.y);
        }

        if (bola.getGlobalBounds().intersects(jugador2.getGlobalBounds())) {
            speed.x = -speed.x;
            bola.setPosition(jugador2.getPosition().x - bola.getGlobalBounds().width, position.y);
        }

#pragma endregion ColisionJugador

        bola.move(speed);

#pragma region ActuPuntuacion

        std::ostringstream ss1;
        ss1 << "Jugador 1: " << score1;
        PuntuacionJ1.setString(ss1.str());

        std::ostringstream ss2;
        ss2 << "Jugador 2: " << score2;
        PuntuacionJ2.setString(ss2.str());

#pragma endregion ActuPuntuacion

#pragma region window

        window.clear();

        window.draw(bola);

        window.draw(jugador1);

        window.draw(jugador2);

        window.draw(PuntuacionJ1);

        window.draw(PuntuacionJ2);

        window.draw(Divisor);

        window.display();

#pragma endregion window

    }
    return 0;
}
