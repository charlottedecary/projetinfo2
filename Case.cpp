#include <iostream>
#include "Case.h"

Case::Case(int x,int y)
 : m_x(x),m_y(y),m_pion(nullptr)
 {
 }
 Case::~Case()
 {
 }

int Case::getx()
{
    return m_x;
}
int Case::gety()
{
    return m_y;
}
std::string Case::getpion()
{
    if(m_pion!=nullptr)
    return *m_pion;
}

bool Case::aUnPion()
{
    if(m_pion!=nullptr)
    return true;
    else return false;
}

void Case::ajoutpion(std::string pion)
 {
     m_pion = &pion;
     std::cout<<"pion ajouté!"<<std::endl;
 }
