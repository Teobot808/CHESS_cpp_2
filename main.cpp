#include <SFML/Graphics.hpp>
//#include <include/SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Vector2.hpp"
#include <string>

struct Piece {

const int WhiteKing = 75;

const int BlackKing = 107;

const int WhiteQueen = 81;

const int BlackQueen = 113;

const int WhiteBishop = 66;

const int BlackBishop = 98;

const int WhiteKnight = 78;

const int BlackKnight = 110;

const int WhitePawn = 80;

const int BlackPawn = 112;

const int WhiteRook = 82;

const int BlackRook = 114;

const int Nothing = 0;


};

int a = 5;
int chessboard[64];
int StartingPosition[64] = {82, 78, 98, 81, 75, 98, 78, 82, 80, 80, 80, 80, 80, 80, 80, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 112, 112, 112, 112, 112, 112, 112, 114, 110, 98, 113, 107, 98, 110, 114};

int main(){
    //here we go!

for(int i = 0; i < 64; i++){
    chessboard[i] = StartingPosition[i];
}


int b = chessboard[7];


    std::cout<<b<<std::endl;
system("pause");

    return 0;
}