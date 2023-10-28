#include "chrono"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <unistd.h>

#include "Tetrominos.C++"
#include "Logic.C++"

int main(){

    const int cellsize = 20; // Define the cellsize variable
    const int column = 10; // Define the column variable
    const int row = 20; // Define the row variable
    const int screen_resized = 1; // Define the screen_resized variable
    const int frame_duration = 16; // Define the frame duration in milliseconds
    unsigned lag = 0;

    std::vector<std::vector<int>> grid(column, std::vector<int>(row, 0)); // Define the grid variable

    std::chrono::time_point<std::chrono::steady_clock> previous_time;

    sf::Event event;

    sf::RenderWindow window(sf::VideoMode(cellsize*column*screen_resized, cellsize*row*screen_resized), "Tetris");
    window.setView(sf::View(sf::FloatRect(0, 0, cellsize*column*screen_resized, cellsize*row*screen_resized)));

    auto previous_time = std::chrono::steady_clock::now();

    while (1 == window.isOpen()){
        auto current_time = std::chrono::steady_clock::now();
        auto delta_time = std::chrono::duration_cast<std::chrono::milliseconds>(current_time - previous_time).count();
        previous_time = current_time;

        sf::RectangleShape cell(sf::Vector2f(cellsize - 1, cellsize - 1));
        cell.setFillColor(sf::Color::Red);

        window.clear();

        int grid[column][row] = {0}; // Define the grid variable

        for( int i = 0; i < column; i++){
            for( int j = 0; j < row; j++){
                if(0 != grid[i][j]){
                    cell.setPosition(i*cellsize*screen_resized, j*cellsize*screen_resized);
                    window.draw(cell);
                }
            }
        }
    }

    case sf::Event::MouseButtonPressed:
    {
        switch (event.key.code)
        
    }
}