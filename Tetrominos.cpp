#include <iostream>

class Tetrominos {
    public:
        char* name;
        int color;
        int shape[4][4];
        Tetrominos(int shape[4][4]);
        Tetrominos();
};

Tetrominos::Tetrominos(int shape[4][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            this->shape[i][j] = shape[i][j];
        }
    }
}

Tetrominos::Tetrominos(){  // Long piece
    this->shape[1][0] = 1;
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[1][3] = 1;

    name = "Long";
}

Tetrominos::Tetrominos(){  // Square piece
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[2][1] = 1;
    this->shape[2][2] = 1;

    name = "Square";
}

Tetrominos::Tetrominos(){  // T piece
    this->shape[1][0] = 1;
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[2][1] = 1;

    name = "T";
}

Tetrominos::Tetrominos(){  // L piece
    this->shape[1][0] = 1;
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[2][0] = 1;

    name = "L";
}

Tetrominos::Tetrominos(){  // J piece
    this->shape[1][0] = 1;
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[2][2] = 1;

    name = "J";
}

Tetrominos::Tetrominos(){  // S piece
    this->shape[1][0] = 1;
    this->shape[1][1] = 1;
    this->shape[2][1] = 1;
    this->shape[2][2] = 1;

    name = "S";
}

Tetrominos::Tetrominos(){  // Z piece
    this->shape[1][1] = 1;
    this->shape[1][2] = 1;
    this->shape[2][0] = 1;
    this->shape[2][1] = 1;

    name = "Z";
}







