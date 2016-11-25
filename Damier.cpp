#include "Damier.h"
#include <iostream>

Damier::Damier(int taille)
:m_taille(taille)
{
}
Damier::~Damier()
{
}

void Damier::initTab()
{
    for(int i=0;i<m_taille;i++)
    {
        std::vector<Case*> ligne;
        for(int j=0;j<m_taille;j++)
        {
            Case *nouvelle = new Case(i,j);
            ligne.push_back(nouvelle);
        }
        m_cases.push_back(ligne);
    }
}

int Damier::getTaille()
{
    return m_taille;
}

Case Damier::getCase(int x, int y)
{
    return *(m_cases[x][y]);
}

std::vector<std::vector<Case*>> Damier::getcases()
{
    return m_cases;
}
