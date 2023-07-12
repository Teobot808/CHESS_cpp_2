#include <SFML/Graphics.hpp>
//#include <include/SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Vector2.hpp"
#include <string>
using namespace sf;

int sizeofchessboard = 665;
void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza);
float sizeofchessboard1 = (sizeofchessboard/665); //size

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
//system("pause");





//cancer
sf::RenderWindow window(sf::VideoMode(665, 665), "My window");
sf::Texture chessboardpng;
        if (!chessboardpng.loadFromFile("chessboard1.png")) {
            return 0;
        }
    sf::Sprite chessboard;
        chessboard.setTexture(chessboardpng);
        //chessboard.setPosition(sf::Vector2f(0.f, 0.f));
                chessboard.setPosition(0, 0);
chessboard.setScale(sizeofchessboard1, sizeofchessboard1);
sf::Texture vezatexture;
        if (!vezatexture.loadFromFile("Chess-Pieces.png", sf::IntRect(0, 0, 132, 132)))
{
    return 1; // error... 
}
sf::Sprite bielaveza;
        bielaveza.setTexture(vezatexture);
        //chessboard.setPosition(sf::Vector2f(0.f, 0.f));
               bielaveza.setOrigin(66, 66);
                bielaveza.setPosition(100, 100);
        bielaveza.setScale(0.62973484848f, 0.62973484848f);
while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
                while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
                }

        window.clear();              
       
             //Update(keyTime, window, chessboard);
	        Draw(window, chessboard, bielaveza);
}

    return 0;
}

void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza)
{
	window.clear(Color::White);

	//Draw stuff
	//window.draw(retard);
    window.draw(chessboard);
    window.draw(bielaveza);
	window.display();
}