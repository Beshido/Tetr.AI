#include <iostream>
#include <vector>

class Position {
public:
    int x;
    int y;

    Position(int x, int y) : x(x), y(y) {}
};

class Tetromino {
    std::vector<Position> piece;

public :
    Tetromino(unsigned char i_shape);

    bool move_down(const std::vector<std::vector<int>> &grid);

    void reset(unsigned char i_shape);
    void update_grid(std::vector<std::vector<int>> &grid);

    std::vector<Position> get_piece();
};
