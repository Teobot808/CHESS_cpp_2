#include <SFML/Graphics.hpp>
//#include <include/SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Vector2.hpp"
#include <string>
#include <cstring>
using namespace sf;

int sizeofchessboard = 665;
//void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza);
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
std::string move;
int a = 5;
int chessboard[64];
int StartingPosition[64] = {82, 78, 98, 81, 75, 98, 78, 82, 80, 80, 80, 80, 80, 80, 80, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 112, 112, 112, 112, 112, 112, 112, 114, 110, 98, 113, 107, 98, 110, 114};
int twoDarray[8][8] = {
{56, 57, 58, 59, 60, 61, 62, 63},
{48, 49, 50, 51, 52, 53, 54, 55},
{40, 41, 42, 43, 44, 45, 46, 47},
{32, 33, 34, 35, 36, 37, 38, 39},
{24, 25, 26, 27, 28, 29, 30, 31},
{16, 17, 18, 19, 20, 21, 22, 23},
{8, 9, 10, 11, 12, 13, 14, 15},
{0, 1, 2, 3, 4, 5, 6, 7}
};

int ConvertedChar;
int ConvertedInt;
int pos1;
int pos2;
int main(){
    //here we go!

for(int i = 0; i < 64; i++){
    chessboard[i] = StartingPosition[i];
}


int b = chessboard[7];


    std::cout<<b<<std::endl;
//system("pause");

getline(std::cin, move);
const int length = move.length();
char* char_array = new char[length + 1];
strcpy(char_array, move.c_str());
for (int i = 0; i < length; i++)
{
        std::cout << char_array[i];
if (char_array[i] == 'a' || 'b' || 'c' || 'd' || 'e' || 'f' || 'g' || 'h' ){
switch (char_array[i])
{
case 1:
  ConvertedInt = 0;  
    break;
case 2:
ConvertedInt = 1;
break;
case 3:
ConvertedInt = 2;
break;
case 4:
ConvertedInt = 3;
break;
case 5:
ConvertedInt = 4;
break;
case 6:
ConvertedInt = 5;
break;
case 7:
ConvertedInt = 6;
break;
case 8:
ConvertedInt = 7;
break;
default:
    break;
}

}
else if (char_array[i] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' ){
ConvertedChar = char_array[i] - '0';
ConvertedChar--;
}
else if (char_array[i] == '-')
{
   pos1 = twoDarray[ConvertedChar][ConvertedInt];
}
else if (char_array[i] = ';')
{
pos2 = twoDarray[ConvertedChar][ConvertedInt];
    /* code */
}

else{
    //error message or something like that?
}


}
std::cout << std::endl;
std::cout << pos1 << std:: endl;
std::cout << pos2;
system("pause");

    return 0;
}



/*
void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza)
{
	window.clear(Color::White);

	//Draw stuff
	//window.draw(retard);
    window.draw(chessboard);
    window.draw(bielaveza);
	window.display();
}
*/
/*
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
*/