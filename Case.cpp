#include <iostream>
#include "Case.h"
#include "Pion.h"

Case::Case(int x,int y)
 : m_x(x),m_y(y),m_pion(0)
 {
 }
 Case::~Case()
 {
     delete m_pion;
 }

int Case::getx()
{
    return m_x;
}
int Case::gety()
{
    return m_y;
}

Pion* Case::getpion()
{
        return m_pion;
}

bool Case::aUnPion()
{
    if(m_pion!=0)
    return true;
    else return false;
}

void Case::ajoutpion(Pion* pion)
 {
     m_pion = pion;
 }
void Case::enlevepion()
{
    m_pion=nullptr;
}
