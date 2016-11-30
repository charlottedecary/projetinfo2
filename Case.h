#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED
#include <iostream>
#include "Pion.h"

class Case
{

    private :

        int m_x,m_y;
        Pion *m_pion;

    public :

        Case(int x,int y);
        ~Case();
        int getx();
        int gety();
        void ajoutpion(Pion *pion);
        void enlevepion();
        Pion* getpion();
        bool aUnPion();
};

#endif // CASE_H_INCLUDED
