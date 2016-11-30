#include "console.h"
#include <conio.h>
#include <windows.h>

Console* Console::m_instance = NULL;

Console::Console()
{
    m_instance = NULL;
}

Console::~Console()
{

}

void Console::deleteInstance()
{
    delete m_instance;
    m_instance = NULL;
}

Console* Console::getInstance()
{
    if (!Console::m_instance)
    {
        m_instance = new Console();
    }

    return m_instance;
}

void Console::gotoLigCol(int lig, int col)
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

int Console::getInputKey()
{
    return getch();
}

bool Console::isKeyboardPressed()
{
    return kbhit();
}

/*
0: noir
1: bleu foncé
2: vert
3: bleu-gris
4: marron
5: pourpre
6: kaki
7: gris clair
8: gris
9: bleu
10: vert fluo
11: turquoise
12: rouge
13: rose fluo
14: jaune fluo
15: blanc
*/
void Console::_setColor(int back, int front)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,front*16+back);
}

void Console::setColor(Color col)
{
    switch (col)
    {
        case COLOR_WHITE:
            this->_setColor(15, 0);
            break;
        case COLOR_BLACK:
            this->_setColor(0, 0);
            break;
        case COLOR_RED:
            this->_setColor(12, 0);
            break;
        case COLOR_GREEN:
            this->_setColor(10, 0);
            break;
        case COLOR_BLUE:
            this->_setColor(9, 0);
            break;
        case COLOR_YELLOW:
            this->_setColor(14, 0);
            break;
        case COLOR_PURPLE:
            this->_setColor(5, 0);
            break;
        default:
            this->_setColor(7, 0);
    }
}
