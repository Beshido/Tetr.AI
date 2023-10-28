#include "chrono"
#include "SFML/Graphics.hpp"

#include "Tetrominos.C++"
#include "Logic.C++"

int main(){

    const int cellsize = 20; // Define the cellsize variable
    const int column = 10; // Define the column variable
    const int row = 20; // Define the row variable
    const int screen_resized = 1; // Define the screen_resized variable

    unsigned lag = 0;

    std::vector

    std::chrono::time_point<std::chrono::steady_clock> previous_time;

    sf::Event event;

    sf::RenderWindow window(sf::VideoMode(cellsize*column*screen_resized, cellsize*row*screen_resized), "Tetris");
    window.setView(sf::View(sf::FloatRect(0, 0, cellsize*column*screen_resized, cellsize*row*screen_resized)));

    previous_time = std::chrono::steady_clock::now();

    while (1 == window.isOpen()){
        unsigned delta_time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - previous_time).count();

    }
}