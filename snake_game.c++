#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>


using namespace std;
#define MAX_LENGTH 1000

const char DIR_UP ='U';
const char DIR_DOWN ='D';
const char DIR_LEFT ='L';
const char DIR_RIGHT ='R';

int consoleWidth, consoleHeight;

void initscreen()
{
    HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo (hConsole , &csbi);
    consoleHeight =csbi . srWindow.Bottom - csbi.srWindow.Top + 1;
    consoleWidth =  csbi . srWindow.Right - csbi. srWindow.Left +1;

}
struct point
{
    int xCoord;
    int yCoord;
    point(int x , int y ){
        xCoord = x;
        yCoord = y;
    }
};
class Snake {
    int length ;
    char direction;
public:
    point body[MAX_LENGTH];
    Snake (int x,int y ){
        length = 1;
        body[0]=point(x,y);
        direction = DIR_RIGHT;
    }
    ~Snake(){
        delete[] body;
    }
    int getlength(){
        return length;

    }
    void changeDirection(char newDirection){
        if(newDirection==DIR_UP && !direction == DIR_DOWN){
            direction= newDirection;
        }
        else if (newDirection == DIR_DOWN && !direction==DIR_UP){
            direction= newDirection;
        }
        else if(newDirection== DIR_LEFT && !direction== DIR_RIGHT){
            direction= newDirection;
        }
        else if(newDirection== DIR_RIGHT && !direction== DIR_LEFT){
            direction= newDirection;
        }
    }
    
};
class Board{
    Snake *snake;

};

int main() {
     


    return 0;
}