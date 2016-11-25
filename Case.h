#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED
#include <iostream>

class Case
{

    private :

        int m_x,m_y;
        std::string * m_pion;

    public :

        Case(int x,int y);
        ~Case();
        int getx();
        int gety();
        void ajoutpion(std::string pion);
        void enlevepion();
        std::string getpion();
        bool aUnPion();
};

#endif // CASE_H_INCLUDED
